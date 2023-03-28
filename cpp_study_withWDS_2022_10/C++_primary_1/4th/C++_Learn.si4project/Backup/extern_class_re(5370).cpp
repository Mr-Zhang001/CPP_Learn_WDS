#include <iostream>
#include <string.h>
#include <windows.h>

using std::cout;
using ste::ednl;

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

	void printInfo(void)
		{
			cout<<"Point is ("<<x<<","<<y<<")"<<endl;
	}

	friend Point add(Point &p1, Point &p2); //定义add为class的友员，友员可以访问private里的内容
};

Point add(Point &p1, Point &p2)
{
	Point n;
	n.setx(p1.x + p2.x);
	n.sety(p1.y + p2.y);
	return n;
}

int main(int argc, char **argv)
{
	Point p1(1,2);
	Point p2(2,3);
	
	Point sum = p1+p2;
	sum.printInfo();	
	
	return 0;
}

