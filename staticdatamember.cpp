#include <iostream>
using namespace std;
class PE {
  static float g; // Static data member, Shared by all instances
			float m,h,R;
	public:
	void input()
	{
		cout<<"Enter mass and height: ";
		cin>>m>>h;
	}
  	
  void print() 
  {
    R=m*g*h;
    cout << "PE = " << R << endl;
  }
};

float PE::g = 9.8; // Define static data member

int main() {
  PE obj1, obj2;
  obj1.input();
  obj2.input();
  obj1.print(); 
  obj2.print();
return 0;
}