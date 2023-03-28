#include <stdio.h>
#include "person.h"


void Number::Setname(char *name)
	{
	this->name = name;
}

int Number::Setage(int age)
	{
	if (age<0 ||age>150)
		{
			this->age = -1;
			return -1;
	}
	else
		{
			this->age = age;
			return 0;
	}
}

void Number::printInfo(void)
	{
	printf("name = %s, age = %d, work = %s\r\n",name,age,work);
}







