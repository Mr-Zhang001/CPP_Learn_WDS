#include <stdio.h>



#if 0

class person {
public:
	char *name;
	int   age;
	char *work;
	void printInfo(void)
		{
			printf("name = %s, age = %d, work = %s\r\n",name,age,work);
		}
	};


int main (int argc, char **argv)
{
	
	struct person persons[]= {
		{"zhangsan",10,"teacher"},
			{"lisi",16,"docotr"},
	};
	persons[0].printInfo();
	persons[1].printInfo();
	return 0;
}
#endif

#if 0


//如果不写public，那么默认的权限是private，私有权限，只能够在类内部被使用
/*
class person {
public:
	char *name;
	int   age;
	char *work;
	void printInfo(void)
		{
			printf("name = %s, age = %d, work = %s\r\n",name,age,work);
		}
	};

*/
/*public, protected, private*/
class person {
//为什么要将这些设置成私有的呢，因为要加一些限制条件，不然比如年龄就可以
//-1了，这显然是不对的，（设计原因？）
private:
	char *name;
	int   age;
	char *work;
public:
	void setName(char *name)
		{
			this->name = name;
		}
	int setAge(int age)
		{
			if(age < 0 || age > 150)
				{
					this->age = 0;
					return -1;
			}
			else
				{
				this->age = age;
				return 0;
			}
	}
	
	void printInfo(void)
		{
			printf("name = %s, age = %d, work = %s\r\n",name,age,work);
		}
	};
	
int main (int argc, char **argv)
{
	person per;

	per.setName("zhangsan");
	per.setAge(20);
	per.printInfo();

	return 0;
}
#endif

#if 0
class Number{
private:
	char *name;
	int   age;
	char *work;
public:
	void Setname(char *name);
		{
		this->name = name;
	}
	int Setage(int age);
		{
		if (age<0 ||age>150)
			{
				this->age = -1;
				return -1;
		}
		else
			{
				this->age = age;
				return 0;
		}
	}
	void printInfo(void);
		{
		printf("name = %s, age = %d, work = %s\r\n",name,age,work);
	}

};




int main(int argc, char **argv)
{
	Number zhangsan;
	zhangsan.Setname("zhangsan");
	zhangsan.Setage(200);
	zhangsan.printInfo();
	return 0;
}

#endif


class Number{
private:
	char *name;
	int   age;
	char *work;
public:
	void Setname(char *name);
	int Setage(int age);
	void printInfo(void);
};

void Number::Setname(char *name)
	{
	this->name = name;
}

int Number::Setage(int age)
	{
	if (age<0 ||age>150)
		{
			this->age = -1;
			return -1;
	}
	else
		{
			this->age = age;
			return 0;
	}
}

void Number::printInfo(void)
	{
	printf("name = %s, age = %d, work = %s\r\n",name,age,work);
}




int main(int argc, char **argv)
{
	Number zhangsan;
	zhangsan.Setname("zhangsan");
	zhangsan.Setage(200);
	zhangsan.printInfo();
	return 0;
}





