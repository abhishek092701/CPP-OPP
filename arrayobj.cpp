#include<iostream>
using namespace std;
class Test{
	int x;
	public:
		void input()
		{
			cout<<"Enter value for x: ";
			cin>>x;		
		}
		void calculate()
		{
			x=x+10;		
		}
		void display();
};
void Test::display()
{
	cout<<"The value of x is "<<x;
}
int main()
{
	Test obj1[3];
	obj1[2].input();
	obj1[2].calculate();
	obj1[2].display();
	obj1[0].display();
	return 0;
	
	
	
	
	
	
	
}