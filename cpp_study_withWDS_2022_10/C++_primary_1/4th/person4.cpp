#include <iostream>
#include "person4.h"

using namespace std;
namespace A{

void Person::SetName(char * name)
{

	this->name = name;
}

int Person::SetAge(int age)
{
	if(age>0 && age<120)
		{
			this->age = age;
			return 0;
	}
	else
		{
			this->age = -1;
			return -1;
	}
}

void Person::SetWork(char *work)
	{
		this->work = work;
}

void Person::PrintInfo(void)
{
	cout<<"name:"<<name<<"age:"<<age<<"work:"<<work<<endl;
}

void PrintVerion(void)
{
	cout<<"Person v1.0 by cn\r\n"<<endl;
}

}
