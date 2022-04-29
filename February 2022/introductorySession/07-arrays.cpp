#include <iostream>

using namespace std;

int main()
{
    // definition and assigning values by curly braces
    int a[5] = {1, 2, 3 ,4 ,5};
    int a1 = 1;
    int a2 = 2;
    // ....
    // definition and assigning values by for loop
    int b[5];
    for (int i = 0; i < 5; i++)
    {
        b[i] = i + 1;
    }

    // printing by for loops
    cout << "array A:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    
    int c[5];
    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }

    // Address of each element
    for (int i = 0; i < 5; i++)
    {
        cout << &a[i] << '\t' << &b[i] << '\t' << &c[i] << endl;
    }
}