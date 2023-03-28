#include<stdio.h>
#include"person4.h"
#include"dog.h"

//using 说明
/*global namespace*/
//using A::Person; //
//using C::Dog;

//using 编译
using namespace A;
using namespace C;

int main(int argv, char **argc)
{
	/*Local namespace*/
	//using A::Person;
	//using C::Dog;
	
	Person Per;
	Per.SetName("zhangsan");
	Per.SetAge(29);
	Per.SetWork("Teacher");
	Per.PrintInfo();

	Dog dog;
	dog.SetName("wangcai");
	dog.SetAge(9);
	dog.PrintInfo();


	
	A::PrintVerion();
	C::PrintVerion();
	return 0;
}

