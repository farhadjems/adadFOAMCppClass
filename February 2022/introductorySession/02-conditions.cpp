#include <iostream> 

using namespace std;

int main()
{
    int a = 2;
    int b = 4;

    // using if separately
    if (a > b)
    {
        cout << " a is greater than b\n";
    }
    
    if (b > a)
    {
        cout << " b is greater than a\n";
    }
    cout << "----------------------------------------------\n";

    // using if else
    if (a > b)
    {
        cout << "a is greater than b\n";
    }
    else
    {
        cout << "b is greater than a\n";
    }
    cout << "----------------------------------------------\n";


    // using if, else if, else
    int c = 6; 
    if (a > c )
    {
        cout << " a is greater than c\n";
    }
    else if (b > c)
    {
        cout << " b is greater than a, c\n";
    }
    else 
    {
        cout << " c is the greatest number\n";
    }
}