#include<iostream>
using namespace std;
int main()
{
	int *p;
	p=new int;
	*p=99;
	cout<<"The value is: "<<*p;
	delete p;
	return 0;
}