#include <stdio.h>


/**************************************************************/
/*
int main(int argc, char **argv)
{
	char ages[]={10,16};
	char *names[]={"zhangsan", "lisi"};
	int i;

	for(i=0; i<2; i++)
		{
			printf("name = %s, age = %d\r\n", names[i], ages[i]);
	}
	return 0;
}
*/
/**************************************************************/
/*
struct preson{
	char *name;
	int age;
	char *work;
};


int main(int argc, char **argv)
{
	struct preson Presons[]{
		{"zhangsan",22;"teacher"},
		{"lisi",23, "doctor"},
		
	};
	int i;

	for(i=0; i<2; i++)
		{
			printf("name = %s, age = %d, work = %s\r\n", Presons[i].name, Presons[i].age, Presons[i].work);
	}
	return 0;
}
*/
/***************************************************************/

struct preson{
	char *name;
	int age;
	char *work;

	void (*printInfo)(struct preson *pre);
};

void printInfo(struct preson *pre)
{
	printf("name = %s, age = %d, work = %s\r\n",  pre->name, pre->age, pre->work);
}


int main(int argc, char **argv)
{
	struct preson Presons[]{
		{"zhangsan",22,"teacher",printInfo},
		{"lisi",23, "doctor", printInfo},
	};

	Presons[0].printInfo(&Presons[0]);
	Presons[1].printInfo(&Presons[1]);
	
	
	return 0;
}

/***************************************************************/


