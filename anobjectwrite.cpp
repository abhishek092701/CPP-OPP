#include <iostream>
#include <fstream>
using namespace std;

class Student
{
    int roll;
    char name[20];

public:
    void getData()
    {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter name: ";
        cin >> name;
    }
};

int main()
{
    Student s;

    s.getData();

    ofstream file("D:\\test\\student.txt",ios::app);
    
    if(!file)
    {
    	cout<<"File not open";
    	return 1;
	}

    file.write((char*)&s, sizeof(s));

    file.close();

    cout << "Object written to file successfully.";

    return 0;
}