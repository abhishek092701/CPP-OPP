#include <iostream>
using namespace std;

class NumberProcessor {
private:
    int num;

    // Private member function (Helper function)
    int calculateSquare() {
        return num * num;
    }

public:
    void inputNumber() {
        cout << "Enter an integer: ";
        cin >> num;
    }

    // Public member function that demonstrates nesting
    void displayResult() {
        // Direct call to another member function of the same class
        int square = calculateSquare(); 
        
        cout << "The square of " << num << " is: " << square << endl;
    }
};

int main() {
    NumberProcessor processor;
    
    processor.inputNumber();
    
    // Calls displayResult(), which internally calls calculateSquare()
    processor.displayResult(); 

    // processor.calculateSquare(); // ERROR: compilation fails because it is private
    return 0;
}