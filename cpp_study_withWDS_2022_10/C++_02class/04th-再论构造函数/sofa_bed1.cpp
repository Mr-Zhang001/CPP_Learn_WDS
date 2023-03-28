#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;



class Furniture{
private:
	int wight;
	int a;
public:
	Furniture(){cout<<"Furniture()"<<endl;}
	Furniture(char *abc){cout<<"Fruniture()"<<endl;}
	void setwight(int wight){this->wight = wight;}
	int getwight(void) { return wight;}
};


class Sofa:virtual public Furniture{
public:
	Sofa(){cout<<"sofa()"<<endl;}
	Sofa(char *qwe){cout<<"sofa(char *1234)"<<endl;}
	
	void wathcTV(void){std::cout<<"watch TV"<<endl;}
	
};

class Bed:virtual public Furniture{
private:
	int a;
public:
	Bed(){cout<<"Bed()"<<endl;}
	Bed(char *qwe){cout<<"Bed()"<<endl;}
	void sleep(void){std::cout<<"sleep"<<endl;}
	void dolove(void){std::cout<<"dolove"<<endl;}
};


class Date{
public:
	Date() {cout<<"Date()"<<endl;}
	Date(char *abc) {cout<<"Date(char *abc)"<<endl;}

};

class Type{
public:
	Type(){cout<<"Type()"<<endl;}
	Type(char *abc) {cout<<"Type(char *abc)"<<endl;}
};




class SofaBed:public Sofa, public Bed{  
private:
	int c;
public:
	SofaBed(){cout<<"SofaBed()"<<endl;}
	SofaBed(char *abc){cout<<"SofaBed(char *abc)"<<endl;}

};

class LeftRightcom{
public:
	LeftRightcom(){cout<<"LeftRightcom()"<<endl;}
    LeftRightcom(char *abc){cout<<"LeftRightcom(char *abc)"<<endl;}

};

class LeftRightSofaBed: public SofaBed, vritual public LeftRightcom{
private:
	Date date;
	Type type; 
	
public:
	LeftRightSofaBed(){cout<<"LeftRightSofaBed()"<<endl;}

	LeftRightSofaBed(char *str1,char *str2,char *str3):SofaBed(str1),LeftRightcom(str2),date(str3){cout<<"LeftRightSofaBed()"<<endl;}

};

int main(int argc, char **argv)
{
	LeftRightSofaBed s("abc","qwe","yyy");       
	return 0;
}



