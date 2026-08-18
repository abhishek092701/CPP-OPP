#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // 1. write to a text file
    fstream my_file("D:\\test\\example5.txt", ios::out);

    if (my_file) {
        my_file << "This is a test line." << endl;
        my_file.close();
    }
    else {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    // 2. read from the same file
    string line;
    my_file.open("D:\\test\\example5.txt", ios::in);
    
    if (my_file) {
        while (!my_file.eof()) {
            getline(my_file, line);
            cout << "Read from file: " << line << endl;
        }
        my_file.close();
    }
    else {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    // 3. append data to the end of the file
    my_file.open("D:\\test\\example5.txt", ios::app);

    if (my_file) {
        my_file << "This is another test line, appended to the file." << endl;
        my_file.close();
    }
    else {
        cout << "Unable to open file for appending." << endl;
        return 1;
    }

    return 0;
}