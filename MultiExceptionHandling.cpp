#include<iostream>
using namespace std;
int main() 
{    
    double numerator, denominator, arr[10]={0.0, 0.0, 0.0, 0.0,0.0, 0.0, 0.0, 0.0,0.0,0.0};
    int index;
    cout<<"Enter Array index: ";
    cin>>index;
    try{
        if(index>=10)
            throw "Error: Array out of bounds!";
        cout<<"Enter Numerator: ";
        cin>>numerator;
        cout<<"Enter Denominator: ";
        cin>>denominator;
        if(denominator==0)
            throw 0;
        arr[index]=numerator/denominator;
        cout<<arr[index]<<endl;
    }
    catch(const char* msg) {
        cout<<msg<<endl;
    }
    catch(int num) {
        cout<<"Error: Cannot divide by "<<num<<endl;
    }
    catch(...) {
        cout<<"Unexpected Exception!"<<endl;
    }
    return 0;    
}