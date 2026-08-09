#include<iostream>
using namespace std;

class Product
{
public:
    int items;

protected:
    float cost;

private:
    float total;

public:
    void setData()
    {
        cout<<"Enter number of items: ";
        cin>>items;

        cout<<"Enter cost per item: ";
        cin>>cost;
    }

    void setTotal(float t)
    {
        total = t;
    }

    float getTotal()
    {
        return total;
    }
};

class Calculate : public Product
{
public:
    void calculate()
    {
        setTotal(items * cost);
    }

    void display()
    {
        cout<<"\nItems = " << items;
        cout<<"\nCost per Item = " << cost;
        cout<<"\nTotal Cost = " << getTotal();
    }
};

int main()
{
    Calculate c;

    c.setData();
    c.calculate();

    c.display();

    return 0;
}