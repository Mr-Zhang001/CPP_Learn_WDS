#include <stdio.h>


#if 0
int main(int argc, char **argv)
{
	char *zs_name = "zhangsan";
	int zs_age    = 10;

	char *ls_name = "lisi";
	int ls_age    = 16;

	printf("name = %s,age = %d\n",zs_name,zs_age);
	printf("name = %s,age = %d\n",ls_name,ls_age);

	return 0;
}
#endif

#if 0
int main (int argc, char **argv)
{
	int i;
	char *name[] = {"zhangsan","lisi"};
	int   age[]  = {10, 16};

	for(i=0;i<2;i++)
		printf("name = %s,age = %d\n",name[i],age[i]);

	return 0;
}
#endif


#if 0

typedef struct person {
			char *name;
			int   age;
			char *work;
			void (*printInfo)(struct person *per);//在外面实现这个函数指针
		}person;

void printInfo(struct person *per)
{
	printf("name = %s, age = %d, work is %s\r\n", per->name,per->age,per->work);
}

int main (int argc, char **argv)
{
	
	person persons[]= {
		{"zhangsan",10,"teacher",printInfo},
			{"lisi",16,"docotr",  printInfo},
	};
	persons[0].printInfo(persons);
	persons[1].printInfo(persons+1);
	return 0;
}
#endif