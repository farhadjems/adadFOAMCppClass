#include <iostream>

using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5}; // problem is that you have to remember the size for the rest of code :(

    // how to define the size of array with variable
    // if the size variable is not const, it will cause error!
    const int size = 5;
    int b[size];

    // how to compute the size of array : using sizeof method
    int sizeB = sizeof(b) / sizeof(b[0]); // or if you know the type, use sizeof(<type>)
    cout << "size of the array b: " << sizeB << endl;

    // multi-dimensional arrays
    int c[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << c[i][j] << '\t';
        }
        cout << endl;
    }

    int sizeXc = sizeof(c) / sizeof(c[0]);
    cout << " sizeX of c: " << sizeXc << endl;
    int sizeYc = sizeof(c[0]) / sizeof(c[0][0]);
    cout << " sizeY of c: " << sizeYc << endl;
}