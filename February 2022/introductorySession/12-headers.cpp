#include <iostream>
#include "12-calculator.h"

using namespace std;


int main()
{
    cout << "3 + 2 = " << addition(3, 2) << endl;
    cout << "3 - 2 = " << subtraction(3, 2) << endl;
    cout << "3 * 2 = " << multiplication(3, 2) << endl;
    cout << "3 / 2 = " << division(3, 2) << endl;
}
