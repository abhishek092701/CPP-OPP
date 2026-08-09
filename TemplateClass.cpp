#include<iostream>
using namespace std;
template<class T>
class Si{
	T Principle;
	T Time;
	T Rate;
	T R;
	public:
		Si(T p, T t, T r)
		{
			Principle=p;
			Time=t;
			Rate=r;
		}
		T calculate()
		{
			R=(Principle*Time*Rate)/100;
			return R;
		}
};
int main()
{
	int x,y,z,e;
	cout<<"Enter For int P,T and R: ";
	cin>>x>>y>>z;
	Si<int>obj1(x,y,z);
	e=obj1.calculate();
	cout<<endl<<"Integer Based Datatype Answer is "<<e<<endl<<endl<<endl;
	
	float fx,fy,fz,f;
	cout<<"Enter For Float P,T and R: ";
	cin>>fx>>fy>>fz;
	Si<float>obj2(fx,fy,fz);
	f=obj2.calculate();
	cout<<endl<<"Float Based Datatype Answer is "<<f<<endl<<endl;
	return 0;
}