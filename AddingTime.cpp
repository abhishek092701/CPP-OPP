#include<iostream>
using namespace std;
class Time{
	private:
		int h;
		int m;
		int s;
	public:
		Time()
		{
			h=0;
			m=0;
			s=0;
		}
		Time(int x, int y, int z)
		{
			h=x;
			m=y;
			s=z;
		}
		Time operator +(Time &t)
		{
			Time temp;
			temp.h=h+t.h;
			temp.m=m+t.m;
			temp.s=s+t.s;
			if(temp.s>=60)
    		{
            	temp.m=temp.m+temp.s/60;
            	temp.s=temp.s%60;
        	}
        	if(temp.m>=60)
        	{
            	temp.h=temp.h+temp.m/60;
            	temp.m=temp.m%60;
        	}
			return temp;
		}
		void display()
		{
			cout<<h<<"hrs "<<m<<"min "<<s<<"sec "<<endl;
		}
};
int main()
{
	int a,b,c;
	cout<<"Enter First Time"<<endl;
	cout<<"Enter Hours Minutes Seconds: ";
	cin>>a>>b>>c;
	Time obj1(a,b,c);
	cout<<"Enter Second Time"<<endl;
	cout<<"Enter Hours Minutes Seconds: ";
	cin>>a>>b>>c;
	Time obj2(a,b,c);
	cout<<endl;
	Time obj3;
	obj1.display();
	obj2.display();
	obj3=obj1+obj2;
	obj3.display();
	return 0;
}