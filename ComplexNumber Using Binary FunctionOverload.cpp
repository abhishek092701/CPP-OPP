#include<iostream>
#include<iomanip>
using namespace std;
class Complex{
	private:
		int r;
		int im;
	public:
		Complex()
		{
			r=0;
			im=0;
		}
		Complex(int x, int y)
		{
			r=x;
			im=y;
		}
		Complex operator +(Complex &a)
		{
			Complex T;
			T.r=r+a.r;
			T.im=im+a.im;
			return T;
		}
		void display()
		{
			cout<<setw(10)<<r<<"+"<<im<<"i"<<endl;
		}
};
int main()
{
	int a,b;
	cout<<"Enter First Real and Imaginary Number: ";
	cin>>a>>b;
	Complex obj1(a,b);
	cout<<"Enter Second Real and Imaginary Number: ";
	cin>>a>>b;
	Complex obj2(a,b);
	cout<<endl;
	Complex obj3;
	obj1.display();
	obj2.display();
	cout<<setw(14)<<"______"<<endl;
	obj3=obj1+obj2;
	obj3.display();
	return 0;
}