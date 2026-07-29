#include<iostream>
using namespace std;

class A{
	private:
		int x;
		int y;
		int z;
	public:
		void input()
		{
			cout<<"Enter x, y and z: ";
			cin>>x>>y>>z;
		}
		void display(){
			cout<<x<<endl<<y<<endl<<z;
		}
		friend void calculate(A obj);
};

	void calculate(A obj)
	{
		obj.x=obj.x+10;
		obj.y=obj.y+20;
		obj.z=obj.z+30;
		cout<<obj.x<<endl<<obj.y<<endl<<obj.z;
	}

int main()
{
	A testobj;
	testobj.input();
	calculate(testobj);
 return 0;
}


