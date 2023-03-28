#include<stdio.h>


class Num{
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
