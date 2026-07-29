#include <iostream>
using namespace std;
void area(int s)
{
	int a;
	a=s*s;
	cout<<endl<<"Area of square is "<<a;
}
void area(int l, int b)
{
	int a;
	a=l*b;
	cout<<endl<<"Area of rectangle is "<<a;
}
void area(float r, float pi=3.14)
{
	float a;
	a=pi*r*r;	
	cout<<endl<<"Area of circle is "<<a;
}
int main()
{
	int l,ln,bd;
	float rd;
	cout<<"Enter Length: ";
	cin>>l;
	cout<<"Enter Length and Breadth: ";
	cin>>ln>>bd;
	cout<<"Enter radius: ";
	cin>>rd;
	area(l);
	area(ln,bd);
	area(rd);
    return 0;
}