#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int;
    int n;
    cout << "Enter number: ";
    cin >> n;
    int i = 0, j=0, temp = 0;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter number a[" << i << "]: ";
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << endl
         << "Numbers in Ascending Order: ";
    for (i = 0; i < n; i++)
    {
        cout << endl
             << a[i];
    }
    return 0;
}