#include <string.h>
#include <iostream>
#include <windows.h>

using namespace std;
class Person{
private:
	static int count; //count 属于类(只有一份)，不属于某个对象(静态成员)
	int age;
	char *name;
	char *work;
	
public:

	static int getcount(void)
		{return count;	}
	
	/*构造函数，不能有返回值，可以在类内,也可以在类外定义
	对象的初始化总会通过某个构造函数来完成，即使没有明确地定义构造函数，
	编译器也会为类生成一个默认构造函数。构造函数避免了专门写初始化函数，
	也可以保证初始化工作总被调用，以防止出现对象没有初始化而导致程序出错的情况。*/
	Person() {
			name = NULL;
			work = NULL;
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

	Person(char *name, int age, char *work = "none")
		{
			cout<<"Person(char*name,int age,char *work) is run"<<endl;
			std::cout<<name<<age<<work<<std::endl;
			this->age = age;

			this->name = new char[strlen(name)+1];
			strcpy(this->name,name);

			this->work = new char[strlen(work)+1];
			strcpy(this->work,work);
			count++;
	}
	Person(Person &per) //拷贝构造函数,参数class Person类型的一个指针。
		{
			std::cout<<"Person(Person &per) is run"<<std::endl;
			this->age = per.age;

			this->name = new char[strlen(per.name)+1];
			strcpy(this->name,per.name);

			this->work = new char[strlen(per.work)+1];
			strcpy(this->work,per.work);
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
			if(this->work)
				{
					std::cout<<"delete!!! work is "<<work<<endl;
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

int Person::count = 0;/*定义和初始化count*/

int main(int argc, char **argv)
{
	Person per1;
	Person per2;
	Person per3;
	Person per4;

	Person *per = new Person[10];

	cout<<"Person number = "<<Person::getcount()<<endl;
	
	
	
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
































