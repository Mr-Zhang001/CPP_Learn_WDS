#include<stdio.h>


namespace C{
class Dog{
private:
	char *name;
	int   age;
public:
	void SetName(char *name);
	int  SetAge(int age);
	void PrintInfo(void);
};

void PrintVerion(void);
}


