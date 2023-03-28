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
	friend Point operator+(Point &p1, Point &p2);
	friend Point add(Point &p1, Point &p2); 
	friend Point  operator++(Point &p);
	friend Point operator++(Point &p, int a);
};

Point add(Point &p1, Point &p2)
{
	Point n;
	n.setx(p1.x + p2.x);
	n.sety(p1.y + p2.y);
	return n;
}



Point operator+(Point &p1, Point &p2)
{
	cout<<"operator+ is running!"<<endl;
	Point n;
	n.setx(p1.x + p2.x);
	n.sety(p1.y + p2.y);
	return n;
}

/*++p*/
Point operator++(Point &p)
{
	cout<<"++p is runing"<<endl;
	p.x += 1;
	p.y += 1;
	return p;
}


/*P++*/
Point operator++(Point &p, int a)
{
	cout<<"p++ is runing"<<endl;
	Point n;
	n = p;
	p.x += 1;
	p.y += 1;
	return n;
}

int main(int argc, char **argv)
{
	Point p1(1,2);
	Point p2(2,3);

	Point n = ++p1;
	p1.printInfo();
	n.printInfo();

	cout<<"************************"<<endl;

	Point m = p2++;
	p2.printInfo();
	m.printInfo();
	
	return 0;
}

