#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double pi = 3.14159265358979;

    // setprecision + fixed: control decimal places
    cout << fixed << setprecision(2) << pi << endl;  // 3.14
    cout << fixed << setprecision(5) << pi << endl;  // 3.14159

    // scientific notation
    cout << scientific << setprecision(5) << pi << endl;  // 3.142e+00

    // setw: field width (right-aligned by default)
    cout << setw(5) << "Name"   << setw(8) << "Score" << endl;
    cout << setw(5) << "Alice"  << setw(8) << 95      << endl;
    cout << setw(5) << "Bob"    << setw(8) << 87      << endl;

    // left-align + setfill
    cout << left  << setfill('-') << setw(15) << "Alice"  << 95 << endl;
    // Output: Alice----------95

    // Number bases
    int n = 255;
    cout << dec << n << endl;   // 255
    cout << hex << n << endl;   // ff
    cout << oct << n << endl;   // 377

    // endl vs '\n': endl flushes buffer
    cout << "Line 1" << endl;
    cout << "Line 2" << '\n';   // faster (no flush)

    return 0;
}