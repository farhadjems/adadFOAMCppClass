#include <iostream>

using namespace std;

int add(int num1, int num2); // using two normal variables, copying! 

int pAdd(int* num1, int* num2); // using two pointer variables, passing!

int rAdd(int& num1, int& num2); // using two reference variables, passing!

void voidplusPlus(int num); // changing the input normal variable

int intPlusPlus(int num); // changing the input normal variable and return the result

void intpPlusPlus(int* num); // changing the value stored in the address passed by pointer, no need to return!

void intrPlusPlus(int& num); // changing the value stored in the address passed by reference, no need to return!

void print1DArray(int a[], int size); // printing 1d array

void change1DArray(int a[], int size); // changing the values of given array, no need to return somthing

void print2DArray(int a[][2], int sizeX, int sizeY); // printing 2d array

void change2DArray(int a[][2], int sizeX, int sizeY); // changing the values of 2D array

void print2DPointer(int** pointer2d, int sizeX, int sizeY); // prints a 2d pointer in the form of 2d array

void change2DPointer(int** pointer2d, int sizeX, int sizeY); // changes values of variables pointed by 2d pointer 

void printArrayAddress(int a[][2], int sizeX, int sizeY); // prints address of 2d array elements

void printPointerAddress(int** pointer2d, int sizeX, int sizeY); // prints address of 2d array elements

int main()
{
    // // using normal variables
    // int a = 10;
    // int b = 2;
    // // copying a, b into another part of memory and giving the copied ones to function add
    // cout << "add(a, b): " << add(a, b) << endl;

    // // using pointers
    // int* pa = &a;
    // int* pb = &b;
    // // passsing the address of a, b to pAdd function by pointers, so that there is no copying!
    // cout << "pAdd(pa, pb): " << pAdd(pa, pb) << endl;

    // // using references
    // int& ra = a;
    // int& rb = b;
    // // passsing the address of a, b to pAdd function by references, so that there is no copying!
    // cout << "rAdd(ra, rb): " << rAdd(ra, rb) << endl;


    // //changing variables by functions
    // // normal variables
    // int c = 3;
    // // using void functions
    // cout << "before modifying by voidplusPlus(): " << c << endl;
    // voidplusPlus(c);
    // cout << "after modifying by voidplusPlus(): " << c << endl;

    // // using int function which takes normal variable as an input
    // cout << "before modifying by intplusPlus(): " << c << endl;
    // c = intPlusPlus(c);
    // cout << "after modifying by intplusPlus(): " << c << endl;

    // // using the void function which takes pointer as an input
    // cout << "before modifying by intpPlusPlus(): " << c << endl;
    // intpPlusPlus(&c);
    // cout << "after modifying by intpPlusPlus(): " << c << endl;

    // // using the void function which takes reference as an input
    // cout << "before modifying by intrPlusPlus(): " << c << endl;
    // intrPlusPlus(c);
    // cout << "after modifying by intrPlusPlus(): " << c << endl;


    // functions and arrays
    int d[3] = {1, 2, 3};
    
    print1DArray(d, 3); // printing array
    cout << "changing 1D Array Elements: \n";
    change1DArray(d, 3); // changing values
    print1DArray(d, 3);
    cout << "-----------------------------\n";
    // 2D arrays
    int e[2][2] = {{1, 2}, {3, 4}}; // using stack memory , can cause stackOverFlow error
    print2DArray(e, 2, 2);
    cout << "changing 2D Array Elements: \n";
    change2DArray(e, 2, 2);
    print2DArray(e, 2, 2);
    cout << "-----------------------------\n";
    // pointer to pointer as 2d array
    int sizeX = 3;
    int sizeY = 2;
    int **pointer2d = new int*[sizeX]; // using heap memory
    for (int i = 0; i < sizeX; i++)  
    {
        pointer2d[i] = new int[sizeY];
        for (int j = 0; j < sizeY; j++)
        {
            pointer2d[i][j] = i + j + 1;
        }
    } // how can we put this definition into a function ? hint: using a pointer pointing to this 2d pointer?

    print2DPointer(pointer2d, sizeX, sizeY);
    cout << "changing 2D Pointer Elements: \n";
    change2DPointer(pointer2d, sizeX, sizeY);
    print2DPointer(pointer2d, sizeX, sizeY);
    cout << "-----------------------------\n";
    
    // Address
    cout << " 2d array address:\n";
    printArrayAddress(e, 2, 2);
    cout << " 2d pointer address:\n";
    printPointerAddress(pointer2d, sizeX, sizeY);

}

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int pAdd(int* num1, int* num2)
{
    int sum = *num1 + *num2;
    return sum;
}

int rAdd(int& num1, int& num2)
{
    int sum = num1 + num2;
    return sum;
}

void voidplusPlus(int num)
{
    num++;
}

int intPlusPlus(int num)
{
    num++;
    return num++;
}

void intpPlusPlus(int* num)
{
    ++*num; // ! note that *num++ doesnt work as you think, go check the operator ++ and * precisely :)
}

void intrPlusPlus(int& num)
{
    num++;
}

void print1DArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] <<endl;
    }
}

void change1DArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = size + 1 + i;
    }
}

void print2DArray(int a[][2], int sizeX, int sizeY)
{
    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
}

void change2DArray(int a[][2], int sizeX, int sizeY)
{
    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            a[i][j] = sizeX + sizeY + i + j + 1;
        }
    }
}

void print2DPointer(int** pointer2d, int sizeX, int sizeY)
{
    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            cout << pointer2d[i][j] << '\t';
        }
        cout << endl;
    }
}

void change2DPointer(int** pointer2d, int sizeX, int sizeY)
{
    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            pointer2d[i][j] = sizeX + sizeY + i + j + 1;
        }
    }
}

void printArrayAddress(int a[][2], int sizeX, int sizeY)
{
    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            cout << &a[i][j] << '\t';
        }
        cout << endl;
    }
}

void printPointerAddress(int** pointer2d, int sizeX, int sizeY)
{
    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            cout << &pointer2d[i][j] << '\t';
        }
        cout << endl;
    }
}