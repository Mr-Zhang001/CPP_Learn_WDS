#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

class Furniture{
private:
	int wight;
	int a;
public:
	void setwight(int wight){this->wight = wight;}
	int getwight(void) { return wight;}
};

//对Furniture进行虚拟继承
class Sofa:virtual public Furniture{
public:
	void wathcTV(void){std::cout<<"watch TV"<<endl;}
};
//对Furniture进行虚拟继承
class Bed:virtual public Furniture{
private:
	int a;
public:
	void sleep(void){std::cout<<"sleep"<<endl;}
	void dolove(void){std::cout<<"dolove"<<endl;}
};





class SofaBed:public Sofa, public Bed{  //默认为私有继承，继承下来的东西都私有化
private:
	int c;

};

int main(int argc, char **argv)
{
	SofaBed mysofabed;
	mysofabed.wathcTV();
	mysofabed.sleep();
	mysofabed.dolove();

	mysofabed.setwight(100);           /*直接使用error, 具有二意性，也就是到底setwight是属于sofa,还是属于bed; 虚拟继承后，正常*/
 	//mysofabed.Sofa::setwight(100);       /*太麻烦*/
/*
/解决问题的根本在于将基类中的同名成员函数消掉，只
/保留一个版本，
/首先，提炼共性的东西，定义一个家具类，里面有wight,
/setwight,getwight等属性，
/然后sofa和bed都虚拟继承家具，共用同一个家具副本(virtual, 虚拟继承)
/
*/
	return 0;
}


