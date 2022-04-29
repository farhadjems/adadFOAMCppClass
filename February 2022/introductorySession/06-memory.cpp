#include <iostream>

using namespace std;

int main()
{
    int a = 12;
    cout << "size of variable a: " << sizeof(a) << " bytes" << endl;
    cout << "address of variable a: " << &a <<  endl;
    char b = 'A';
    cout << "size of variable b: " << sizeof(b) << " bytes" << endl;
    cout << "address of variable b: " << &b  << endl;
    float c = 3.14;
    cout << "size of variable c: " << sizeof(c) << " bytes" << endl;
    cout << "address of variable c: " << &c << endl;
    double d = 3.1415926;
    cout << "size of variable d: " << sizeof(d) << " bytes" << endl;
    cout << "address of variable d: " << &d << endl;
    bool e = true;
    cout << "size of variable e: " << sizeof(e) << " bytes" << endl;
    cout << "address of variable e: " << &e << endl;
    string f = "Farhad";
    cout << "size of variable f: " << sizeof(f) << " bytes" << endl;
    cout << "address of variable f: " << &f << endl;
}