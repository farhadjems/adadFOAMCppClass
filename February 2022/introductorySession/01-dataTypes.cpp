#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // integers - 4 bytes
    int a = 10;
    cout << "variable a: " << a << endl;
    int b = 10.5;
    cout << "variable b: " << b << endl;

    // floats - 4 bytes
    float c = 3.1415926;
    cout << "variable c: " << c << endl;
    float d = 3.141592653589793238462643;
    cout << "variable d: " << d << endl;

    // doubles - 8 bytes
    double e = 3.1415926;
    cout << "variable e: " << e << endl;
    double f = 3.141592653589793238462643;
    cout << "variable f: " << f << endl;

    // characters - 1 byte - can hold numbers from 0 to 255 and convert them to character based on ascii table
    char g = 'a';
    cout << "variable g: " << g << endl;
    char h = 78; // 0 -255
    cout << "variable h: " << h << endl;

    // Bool 
    bool i = false;
    cout << "variable i: " << i << endl;
    bool j = true;
    cout << "variable j: "<< boolalpha << j << endl;
    
    // string 
    string k = "Farhad";
    cout << "variable k: " << k << endl;
}