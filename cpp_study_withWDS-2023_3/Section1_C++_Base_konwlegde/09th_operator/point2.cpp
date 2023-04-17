#include <iostream>
#include <strint.h>
#include <unistd.h>

using namesapce std;

class Point{
private:
	int x;
	int y;

public:
	Point()
		{
		cout<<"Point()"<<endl;
		}
	Point(int x, int y) : x(x), y(y)
		{
		cout<<"Point(int x, int y)"<<endl;
	}

	Point(const Point &p)
		{
		cout<<"Point(const Point &p)"<<endl;
		x = p.x;
		y = p.y;
	}
	~Point()
		{
		cout<<"~Point()"<<endl;
	}


	int getX(){return x;}
	int getY(){return y;}
	void setX(int x){ this->x = x}
	void setY(int y){ this->y = y}
	void printInfo()
		{
		cout<<"("<<x<<","<<y<<")"endl;
	}

	Point operator+(Point &p)
		{
		cout<<"operator+"<<endl;
		Point n;
		n.x = this->x + p.x;
		n.y = this->y + p.y;
		return n;
	}
	//++p;
	Point & operator++(void)
		{
		cout<<"operator++(int a)"<<endl;
		this->x += 1;
		this->y += 1;
		return *this;
	}
	//p++
	Point operator++(int a)
		{
		cout<<"operator++(int a)"<<endl;
		Point n;
		n = *this;
		this->x += 1;
		this->y += 1;
		return n;

	}	

	friend Point add(Point &p1, Point &p2);
	
};



//友员函数
Point add(Point &p1, Point &p2)
		{
	Point n;
	n.x = p1.x + p2.x;
	n.y = p1.y + p2.y;
	return n;
}

//友员 输出
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

	m = p1 + p2;//p1.operator+(p2)
	cout<<"add p1,p2"<<endl;

	cout<<"begin"<<endl;
	m = ++p1; //p1.operator++()
	cout<<"m ="<<m<<" "<<"p1 ="<<p1<<endl;
	cout<<"***************************"<<endl;

	n = p1++;
	cout<<"n = "<<n<<" "<<"p1 = "<<p1<<endl;
	cout<<"end"<<endl;

	return 0;
}








