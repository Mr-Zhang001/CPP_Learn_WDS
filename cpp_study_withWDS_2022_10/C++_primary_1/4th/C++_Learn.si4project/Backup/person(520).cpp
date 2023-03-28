#include <string.h>
#include <iostream>
#include <windows.h>

using namespace std;
class Person{
private:
	int age;
	char *name;
	char *work;
	
public:
	Person() {
			name = NULL;
			work = NULL;
		cout<<"Person() is run"<<endl;

	}
	Person(char *name)
		{
			cout<<"Person(char) is run"<<endl;
			this->name = new char[strlen(name)+1];//分配空间
			strcpy(this->name,name);
	}

	Person(char *name, int age, char *work = "none")
		{
			cout<<"Person(char,int) is run"<<endl;
			this->age = age;

			this->name = new char[strlen(name)+1];
			strcpy(this->name,name);

			this->work = new char[strlen(work)+1];
			strcpy(this->work,work);
	}

	~Person()//可以有多个构造函数，但是析构函数只能有个一，且析构函数没有参数
		{
			std::cout<<"~Person is run"<<endl;
			if(this->name)
				{	
					std::cout<<"name is "<<name<<endl;
					delete this->name;
				}
			if(this->work)
				{
					std::cout<<"work is "<<work<<endl;
					delete this->work;
				}
	}
	

	void setName(char *n)
		{
			name = n;
	}
	int setAge(int a)
		{
			if(a<0||a>150)
				{
					age = 0;
					return -1;
			}
			age = a;
			return 0;
	}
	void setWork(char *w)
		{
			work = w;
	}
	void PrintInfo(void)
		{
			cout<<"name = "<<name<<",age = "<<age<<",work = "<<work<<endl;
	}
};


int test_fun(void)
{
	Person per("zhangsan",18);

	Person *per7 = new Person("list",18,"student");
	delete per7;
	return 0;
}

int main(int argc,char **argv)
{
	
	test_fun();
	std::cout<<"run test_fun end"<<endl;
	Sleep(5);
	return 0;
}
































