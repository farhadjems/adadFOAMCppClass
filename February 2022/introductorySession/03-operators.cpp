#include <iostream> 

using namespace std;

int main()
{
    // unary operators
    cout << "opposite of true is: " << !(true) << endl;
    
    // binary operators
    int x = 3;
    cout << "x is: " << x << endl;

    // ternary operators
    int a = 2;
    int b = 3;
    (a < b) ? cout << "a is less than b!\n" : cout << "a is greater than b!\n\n";


    if (a < b)
    {
        cout << " a is less than b!\n";
    }
    else
    {
        cout << "a is greater than b\n";
    }
    
}