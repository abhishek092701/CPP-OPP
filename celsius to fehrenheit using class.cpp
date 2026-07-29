#include<iostream>
using namespace std;
class CS{
	private:
		int f;
		int c;
	public:
		void input()
		{
			cout<<"Enter fahrenheit: ";
			cin>>f;
		}
		void calculate()
		{
			c=(f-32)*5/9;
		}
		void output()
		{
			cout<<endl<<"Fahrenheit to celsius is "<<c;
		}
};
int main()
{
	CS obj1;
	obj1.input();
	obj1.calculate();
	obj1.output();
	return 0;
}