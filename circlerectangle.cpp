#include<iostream>
using namespace std;
class Shape{
	private: //data
		float r;
		int l;
		int b;
		int base,height;
		float Ac,Pc;
		int Ar,Pr,At;
	public: //function
	void circ_input()
	{
		cout<<"Enter radius: ";
		cin>>r;
	}
	void rec_input()
	{
		cout<<"Enter length and breadth: ";
		cin>>l>>b;
	}
	void tri_input()
	{
		cout<<"Enter base and height: ";
		cin>>base>>height;
	}
	void circ_area()
	{
		Ac=3.14*r*r;
	}
	void rect_area()
	{
		Ar=l*b;
	}
	void tri_area()
	{
		At=0.5*base*height;
	}
	void circ_per()
	{
		Pc=2*3.14*r;
	}
	void rect_per()
	{
		Pr=2*(l+b);
	}
	void circle()
	{
		cout<<"The area and perimter of circle is: "<<Ac<<"and"<<Pc;
	}
	void rectangle()
	{
		cout<<"The area and perimter of rectangle is: "<<Ar<<"and"<<Pr;
	}	
	void triangle()
	{
		cout<<"The area of triangle is: "<<At;
	}	
};
int main()
{
	Shape obj;
	/*obj.circ_input();
	obj.circ_area();
	obj.circ_per();
	obj.circle();*/
	obj.tri_input();
	obj.tri_area();
	obj.triangle();

	return 0;
}