#include <iostream> 

using namespace std;


int main()
{
    // old mehtod - not recomended
    int a = int(12.5);
    cout << "a: " << a << endl;

    float b = float(12.5);
    cout << "b: " << b << endl;

    // to_string() for converting everything convertable to string
    string number = to_string(a);
    cout << "string avariable: " << number << endl;

    // new method - using static_cast
    int c = static_cast<int>(12.5);
    cout << "c: " << c << endl;ت
}