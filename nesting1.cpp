#include<iostream>
using namespace std;

class A{
	int x;
	void display()
		{
			cout<<"The value of x is: "<<x;
		}
	public:
		void input()
		{
			cout<<"Enter x: ";
			cin>>x;
		}
	
		void calculate()
		{
			x=x+15;
			display();
		}
};
int main()
{
	A test;
	test.input();
	test.calculate();
	return 0;
}