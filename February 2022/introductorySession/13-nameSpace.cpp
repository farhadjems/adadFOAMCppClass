#include <iostream>

using namespace std;

namespace calc
{
    double addition(double a, double b)
    {
        return (a+b);
    }

    double subtraction(double a, double b)
    {
        return (a-b);
    }

    double multiplication(double a, double b)
    {
        return (a*b);
    }

    double division(double a, double b)
    {
        double c = 0;
        (b != 0) ?  c = a/b : c = 0;
        return c;
    } 
} 

// using namespace calc


int main()
{
    cout << "3 + 2 = " << calc::addition(3, 2) << endl;
    cout << "3 - 2 = " << calc::subtraction(3, 2) << endl;
    cout << "3 * 2 = " << calc::multiplication(3, 2) << endl;
    cout << "3 / 2 = " << calc::division(3, 2) << endl;
}