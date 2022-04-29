#include <iostream> 

using namespace std;

int add(int num1, int num2)
{
    int sum  = num1 + num2;
    return sum;
}

void printValue(int c)
{
    cout << c << endl;
    c = 15;
}

void printValue(int *c); // function declaration

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printValue(array[i]);
    }
}



// overload error
// void printValue(int &c)
// {
//     cout << c << endl;
//     c += 15;
// }

int main()
{
    // comparing these variables
    int a = 5;
    int b = 3;
    int f = add(a, b);
    //cout << " f is: " << f << endl;
    // printing the array
    int h[5] = {1, 2, 3, 4, 5};
    printArray(h, 5);
    //  copying variables
    int c = 10;
    //printValue(c);
    //printValue(c);
    // passing by pointer
    int *d = &c;
    // printValue(d);
    // printValue(d);
    //passing by reference
    int &e = c;

}


void printValue(int *c) // function definition
{
    cout << *c << endl;
    *c += 15;
}