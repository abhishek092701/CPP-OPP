#include<iostream>
using namespace std;
class A{
	int x;
	public:

		A(int m)
		{
			x=m;
			cout<<"The value of x is "<<x<<endl;
		}
};
class B:public A{
	int y;
	public:

		B(int n)
		{
			y=n;
			cout<<"The value of y is "<<y<<endl;
		}

};


int main()
{

	B obj(45);
	
	return 0;
}