#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    int roll;
    char name[20];

public:
    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s;

    ifstream file("D:\\test\\student.txt");

    while (file.read((char*)&s, sizeof(s)))
    {
        s.display();
        cout << endl;
    }

    file.close();

    return 0;
}

