#include<iostream>
#include"dog.h"


namespace C{

void Dog::SetName(char * name)
{
	this->name = name;

}

int Dog::SetAge(int age)
{
		if(age>0 && age<20)
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

void Dog::PrintInfo(void)
{
	
	std::cout<<"name:"<<name<<"age:"<<age<<std::endl;
}


void PrintVerion(void)
{
	std::cout<<"Dog v1.0 by cn"<<std::endl;
}

}
