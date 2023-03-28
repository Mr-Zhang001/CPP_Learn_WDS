#include<stdio.h>
#include"person3.h"

void Num::SetName(char * name)
{
	this->name = name;
}

int Num::SetAge(int age)
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

void Num::SetWork(char * work)
	{
		this->work = work;
}

void Num::PrintInfo(void)
{
	printf("name:%s,age:%d,work:%s\r\n",name,age,work);
}
	
}
