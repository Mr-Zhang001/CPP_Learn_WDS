#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Person{
private:
	char *name;
	int age;
	char *work;

public:
	Person() {
		cout<<"Person()"<<endl;
		name = NULL;
		work = NULL;
	}

	Person(char *name)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->work = NULL;			
	}

	Person(char *name, int age, char *work = "none")
	{
		cout<<"Person(char*, int), name = "<<name<<", age ="<<age<<endl;
		this->age = age;

		this->name = new char[strlen(name)+1];
		strcpy(this->name, name);

		this->work = new char[strlen(work)+1];
		strcpy(this->work, work);
	}
	//形参是 引用
	Person(Person &per)
	{
		cout<<"Person(Person &)"<<endl;
		this->age = per.age;

		this->name = new char[strlen(per.name) + 1];
		strcpy(this->name, per.name);

		this->work = new char[strlen(per.work) + 1];
		strcpy(this->work, per.work);	
	}

	~Person()
		{
		cout<<"~Person()"<<endl;
		if(this->name){
			cout<<"name = "<<name<<endl;
			delete this->name;
		}

		if(this->work){
			cout<<"work = "<<work<<endl;
			delete this->work;
		}
	}

	void setName(char *name)
		{
		this->name = name;
	}

	int setAge(int age)
		{
		if(age<0 || age>150)
			{
			this->age = 0;
			return -1;
		}
		this->age = age;
		return 0;		
	}

	void printInfo(void)
		{
		cout<<"name = "<<name<<", age = "<<age<<", work ="<<work<<endl;

	}
};



class Student{
private:
	Person father;
	Person mother;
	int student_id;
public:
	Student()
		{
		cout<<"Student()"<<endl;	
	}

	Student(int id, char *father, char *mother, int father_age=40, int mother_age=35) : mother(mother,mother_age), father(father, father_age)
		{
		cout<<"Student(int id, char *father, char *mother ,int father_age, int mother_agt)"<<endl;

	}

	~Student()
		{
		cout<<"~Student()"<<endl;
	}

};

int main(int argc, char **argv)
{
	Student s(100, "bill", "lily")
	return 0;
}


