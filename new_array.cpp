#include<iostream>
using namespace std;
int main()
{
	int *p;
	int i=0;
	int n;
	cout<<"Enter value for n: ";
	cin>>n;
	p=new int[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter value: ";
		cin>>p[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<"The value is: "<<*(p+i)<<endl;
		
	}
	delete[] p;
	return 0;
}