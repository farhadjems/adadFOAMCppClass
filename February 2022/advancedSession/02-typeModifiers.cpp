#include <iostream> // input output stream
#include <iomanip> // input output manipulation

using namespace std; 


int main ()
{
    cout << setprecision(30);
    int a = 5000;
    cout << "value: " << a << "\t size: " << sizeof(a) << endl;

    short int b = 5000;
    cout << "value: " << b << "\t size: " << sizeof(b) << endl;

    long int c = 5000;
    cout << "value: " << c << "\t size: " << sizeof(c) << endl;

    long long int d = 5000;
    cout << "value: " << d << "\t size: " << sizeof(d) << endl;

    // short and long doesnt work with float 
    
    double e = 1.12345678901234567890;
    cout << "value: " << e << "\t size: " << sizeof(e) << endl;
    
    long double f = 1.12345678901234567890l;
    cout << "value: " << f << "\t size: " << sizeof(f) << endl;

    // how to control implicit conversion - you can do it with = and () assigning operators
    double d {2.1314};
    float e {2.1314f}; // if you dont use "f" the number will beconsidered as a double and then converts to float
    int f {300ll}; // will consider as long long int if you append ll

    // const modifier 
    const int g = 10;
    cout << "variable g: " << g << endl;
    int const h = 12; 
    cout << "variable h: " << h <<endl;
    // has a difference ! will see further!
    // you cant change them after definition!
    // g = 12; // you cant modify a const variable, compiler error
    // h = 10; // you cant modify a const variable, compiler error

}