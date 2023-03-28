#include <string.h>
#include <iostream>
#include <windows.h>

using namespace std;
class Person{
private:
	static int count; //count 属于类(只有一份)
	char *name;
	int age;
public:
/*
	static int getcount(void)
		{return count;	}
*/
	static int getcount(void);
	Person() {
			name = NULL;
			cout<<"Person() is run"<<endl;
			count++;
		}
	Person(char *name)
		{
			cout<<"Person(char *name) is run"<<endl;
			this->name = new char[strlen(name)+1];//分配空间
			strcpy(this->name,name);
			count++;
	}

	Person(char *name, int age)
		{
			cout<<"Person(char*name,int age) is run"<<endl;
			std::cout<<name<<age<<std::endl;
			this->age = age;

			this->name = new char[strlen(name)+1];
			strcpy(this->name,name);
			count++;
	}
	Person(Person &per) //拷贝构造函数,参数class Person类型的一个指针。
		{
			std::cout<<"Person(Person &per) is run"<<std::endl;
			this->age = per.age;

			this->name = new char[strlen(per.name)+1];
			strcpy(this->name,per.name);
			count++;
	}

	~Person()//可以有多个构造函数，但是析构函数只能有个一，且析构函数没有参数(用来释放)
		{
			std::cout<<"~Person is run"<<endl;
			if(this->name)
				{	
					std::cout<<"delete!!! name is "<<name<<endl;
					delete this->name;
				}
	}
	void setName(char *name)
		{
			if(this->name)
				{	
					delete this->name;
				}
			
			this->name = new char[strlen(name)+1];
			strcpy(this->name,name);
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
	void PrintInfo(void)
		{
			cout<<"name = "<<name<<",age = "<<age<<endl;
	}
};

int Person::count = 0;/*定义和初始化count, 因为在mian外，看起来像全局变量，但是其在类空间内*/

int Person::getcount(void)
{
	return count;
}

class Student : public Person{
	


};

int main(int argc, char **argv)
{
	Student s;
	s.setName("zhang shan");
	s.setAge(16);
	s.PrintInfo();
	return 0;
}

#if 0

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
#endif
































