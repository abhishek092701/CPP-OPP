#include<iostream>
using namespace std;
class Shape{
	int l;
	int b;
	int A;
	public:
		void input() //defining member function inside the class
		{
			cout<<"Enter l and b: ";
			cin>>l>>b;
		}
		void calculate() //defining member function inside the class
		{
			A=l*b;
		}
		void display(); //declaring member function inside the class whose
		                // defintion will be outside of the class.	
};
	void Shape::display()
	{
			cout<<"The area is: "<<A;
	}
int main()
{
	Shape obj;
	obj.input();
	obj.calculate();
	obj.display();
}













