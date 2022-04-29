#include <iostream>

using namespace std;

int main()
{
    // pointers - setting by local variable
    int a = 10;
    int *b = &a;
    cout << "variable a: " << a << endl;
    cout << "address of a: " << &a << endl;
    cout << "variable b: " << b << endl;
    cout << "value in the address tracked by variable b: " << *b << endl;
    cout << "changing the value stored in a using b: " << (++*b) << endl;
    cout << "check if a is changed: " << a << endl;

    // pointers - accessing dynamic memory
    int *c = new int;
    cout << "variable c: " << c << endl;
    cout << "value in the address saved by c: " << *c <<endl;
    cout << "inseting value in address kept by c: " << (++*c) << endl;

    delete c;
    c = nullptr; // OR NULL
    
    // References
    int &d = a;
    cout << "variable a: " << a << endl;
    cout << "address of a: " << &a << endl;
    cout << "variable d: " << d << endl;
    cout << "address of d: " << &d << endl;

}