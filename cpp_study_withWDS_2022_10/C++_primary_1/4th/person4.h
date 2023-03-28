#include<stdio.h>

namespace A{
class Person{
private:
	char *name;
	int   age;
	char *work;
public:
	void SetName(char *name);
	int  SetAge(int age);
	void SetWork(char *work);
	void PrintInfo(void);

};
void PrintVerion(void);
}



