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
			cout<<"Person(char*,int,char*) is run"<<endl;
			std::cout<<name<<age<<work<<std::endl;
			this->age = age;

			this->name = new char[strlen(name)+1];
			strcpy(this->name,name);

			this->work = new char[strlen(work)+1];
			strcpy(this->work,work);
	}
	Person(Person &per) //拷贝构造函数
		{
			std::cout<<"Person(Person &) is run"<<endl;
			this->age = per.age;

			this->name = new char[strlen(per.name)+1];
			strcpy(this->name,per.name);

			this->work = new char[strlen(per.work)+1];
			strcpy(this->work,per.work);
			
	}

	~Person()//可以有多个构造函数，但是析构函数只能有个一，且析构函数没有参数
		{
			std::cout<<"~Person is run"<<endl;
			if(this->name)
				{	
					std::cout<<"name is "<<name<<endl;
					delete this->name;
				}
			if(this->age)
				{
					std::cout<<
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

Person per_g("per_g", 10);

void func()
{
	Person per_func("per_func",11);
	static Person per_func_s("per_func_s",12);
	
}

int test_fun(void)
{
	Person per("zhangsan",18);

	Person *per7 = new Person("list",18,"student");
	delete per7;
	return 0;
}

int main(int argc,char **argv)
{
	std::cout<<"main is run"<<std::endl;
	Person per_main("per_main",13);
	static Person per_main_s("per_main_s",14);
	for(int i = 0; i<2; i++)
		{
			func();
			Person per_for("per_for",i);
	}
	func();
	Sleep(5);
	return 0;
}
































