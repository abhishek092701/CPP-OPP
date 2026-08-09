#include<iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout<<"Class A"<<endl;
    }
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

int main()
{
    D obj;
    //obj.display();

    // Ambiguous because D has two copies of A
    // obj.display();

    //obj.B::display();
    obj.C::display();

    return 0;
}