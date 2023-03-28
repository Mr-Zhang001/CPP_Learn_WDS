#include <stdio.h>
#include "person.h"

int main(int argc, char **argv)
{
	Number zhangsan;
	zhangsan.Setname("zhangsan");
	zhangsan.Setage(200);
	zhangsan.printInfo();
	return 0;
}

