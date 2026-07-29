#include<iostream>
using namespace std;
void salary(int b)
{
	int s;
	s=b;
	cout<<endl<<"Basic Salary is "<<s;
}
void salary(int ba, int bo)
{
	int s;
	s=ba+bo;
	cout<<endl<<"Basic and Bonus Salary is "<<s;	
}
void salary(int ba, int bo, int all)
{
	int s;
	s=ba+bo+all;
	cout<<endl<<"Basic, Bonus and allowance Salary is "<<s;
}
int main()
{
	int bs,bn,aw;
	cout<<"Enter Basic salary:";
	cin>>bs;
	cout<<"Enter basic and bonus salary: ";
	cin>>bs>>bn;
	cout<<"Enter bonus, basic salary:";
	cin>>bs>>bn;
	salary(bs);
	salary(bs,bn);
	salary(bs,bn,2000);
    return 0;
}