#include <iostream>
#include <string.h>
#include <windows.h>

using std::cout;
using std::endl;

using namespace std;

class Point{
private:
	int x;
	int y;

public:
	//写构造函数
	Point(){cout<<"Point() is run"<<std::endl;}
	Point(int x, int y):x(x),y(y){}

	int getx(){return x;}
	int gety(){return y;}
	void setx(int x){this->x = x;}
	void sety(int y){this->y = y;}

	void printInfo(void){	cout<<"Point is ("<<x<<","<<y<<")"<<endl; }


		Point operator+(Point &p)
	{
		cout<<"operator+(Point &p) is running!"<<endl;
		Point n;
		n.x = this->x + p.x;
		n.y = this->y + p.y;
		return n;
	}

	/*++p*/
	Point operator++(void)
	{
		cout<<"operator++(void) is runing"<<endl;
		this->x += 1;
		this->y += 1;
		return *this;
	}


	/*P++,可以分析，后++返回的是执行 ++ 之前的对象，即返回的是执行 ++ 之前的this*/
	Point operator++(int a)
	{
		cout<<"operator++(int a) is runing"<<endl;
		Point n;
		n = *this;
		this->x += 1;
		this->y += 1;
		return n;
	}

	
	friend Point add(Point &p1, Point &p2); 
	friend ostream& operator<<(ostream &o, Point p);
	
};

Point add(Point &p1, Point &p2)
{
	Point n;
	n.setx(p1.x + p2.x);
	n.sety(p1.y + p2.y);
	return n;
}


ostream& operator<<(ostream &o, Point p)
{
	cout<<"("<<p.x<<","<<p.y<<")";
	return o;
}


int main(int argc, char **argv)
{
	Point p1(1,2);
	Point p2(2,3);
	Point m, n;

	m = p1 + p2; /*此时，m = p1.operator+(p2)*/
	cout<<m<<endl;
	cout<<"begin"<<std::endl;

	m = ++p1;  /*m = p1.operator++()*/
	cout<<m<<endl;
	cout<<"************************"<<endl;

	m = p1++; /*m = p1.operator++(0)*/
	cout<<m<<endl;
	
	return 0;
}

