#include <iostream>
using namespace std;

class Student{
public:
    static void showMessage() {
        cout << "Welcome to C++ Programming"<<endl;
    }
};

int main() {
	Student obj;

    Student::showMessage();
    obj.showMessage();

    return 0;
}