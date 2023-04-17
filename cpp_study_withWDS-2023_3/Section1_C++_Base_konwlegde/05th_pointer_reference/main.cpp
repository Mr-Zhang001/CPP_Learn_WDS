#include <iostream>

using namespace std;


//变量操作 传入实参  ,不会操作到内存
int add_one(int a)
{
	a = a+1;
	return a;
}

//指针操作，传入地址，会操作内存

int add_one(int *a)
{
	*a = *a+1;   //去a的地址 把值读出来，加1 ，再写入地址内部。
	return *a;
}


//避免使用指针，但是可以修改内存
int add_one_ref(int &b) //形参作为实参的引用
{
	b = b+1;
	return b;
}

int main(int argc, char **argv)
{
	int a = 99;
	int &c = a;  //c 作为 a 的引用。，，引用（别名）必须初始化

	cout<<"add_one(a)"<<endl;
	cout<<"a = "<<a<<endl;

	cout<<add_one(&a)<<endl;
	cout<<"a = "<<a<<endl;

	cout<<add_one_ref(a)<<endl;
	cout<<"a = "<<a<<endl;

	c++;

	cout<<"a = "<<a<<endl;
	cout<<"c = "<<c<<endl;

	return 0;
}

