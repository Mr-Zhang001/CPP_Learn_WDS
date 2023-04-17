/*
* 1.static 声明为静态的，称为静态成员，不管这个类创建了多少对象，静态成员只有
*一个拷贝，但是类的其他所有成员共享这个拷贝。静态对象属于类，不属于对象。
* 2. 静态变量，是在编译阶段就分配好空间，对象还没创建的时候就有了空间。
* 3. 静态成员变量必须在类中声明，类外定义。定义的时候不加static。
*/

/*
* 静态成员函数
* 1.静态成员函数不属于对象，大家共享它。 
* 2.静态函数不能操作非静态数据，非静态函数也能访问静态数据

*/

/*const 修饰静态成员变量
* 既要实现共享（static），又要实现不能修改(const)， static 前面加上const,定义的时候也要加上const
*/


//静态成员函数没有this指针，所以它没办法访问非静态成员
//静态成员函数不会自动提供this指针，如果他提供了，那么以类名的方式访问静态函数的时候，this没有指向


#include <iostream>
#include <string.h>
#include <unistd.h>

using namesapce std;

class Person{
private:
	static int cnt;  //静态成员变量
	char *name;
	int   age;
	char *work;

public:
	static int getCount(void);

	
	Person() {
			//cout <<"Pserson()"<<endl;
			name = NULL;
			work = NULL;
			cnt++;
		}
		Person(char *name) 
		{
			//cout <<"Pserson(char *)"<<endl;
			this->name = new char[strlen(name) + 1];
			strcpy(this->name, name);
			this->work = NULL;
			cnt++;
		}
	
		Person(char *name, int age, char *work = "none") 
		{
			cout <<"Pserson(char*, int), name = "<<name<<", age= "<<age<<endl;
			this->age = age;
	
			this->name = new char[strlen(name) + 1];
			strcpy(this->name, name);
	
			this->work = new char[strlen(work) + 1];
			strcpy(this->work, work);
			cnt++;
		}
	
		Person(Person &per) 
		{
			cout <<"Pserson(Person &)"<<endl;
			this->age = per.age;
	
			this->name = new char[strlen(per.name) + 1];
			strcpy(this->name, per.name);
	
			this->work = new char[strlen(per.work) + 1];
			strcpy(this->work, per.work);
			cnt++;
		}


		~Person()
		{
			cout<<"~Person()"<<endl;
			if(this->name)
				{
				cout<<"name ="<<name<<endl;
				delete this->name;
			}
			if(this->work)
				{
				cout<<"work ="<<work<<endl;
				delete this->work;
			}

		}
		void setName(char *n)
			{
			name = n;
		}
	int setAge(int a)
	{
		if (a < 0 || a > 150)
		{
			age = 0;
			return -1;
		}
		age = a;
		return 0;
	}

	void printInfo(void)
		{
		cout<<"name = "<<name<<", age = "<<age<<",work = "work<<endl;
	}

};


//类内声明，类外定义
//不需要经过实例化，直接类名调用
int Person::cnt = 0;

int Person::getCount(void)
{
	return cnt;
}


int main(int argc, char **argv)
{
	Person p[100];
	cout<<"person number ="<<Person::getCount()<<endl;
	cout<<"person number ="<<p[0].getCount()<<endl;
	cout<<"person number ="<<p[1].getCount()<<endl;

	return 0;
}















