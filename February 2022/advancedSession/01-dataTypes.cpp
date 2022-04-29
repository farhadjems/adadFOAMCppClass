#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // type auto
    cout << setprecision(20);
    auto intNumber = 12;
    cout << "value: " << intNumber << "\t size: " << sizeof(intNumber) << endl;

    auto floatNumber = 12.01234567890123456789f;
    cout << "value: " << floatNumber << "\t size: " << sizeof(floatNumber) << endl;

    auto  doubleNumber = 12.01234567890123456789;
    cout << "value: " << doubleNumber << "\t size: " << sizeof(doubleNumber) << endl;

    auto character = 'a';
    cout << "value: " << character << "\t size: " << sizeof(character) << endl;

    auto String = "Farhad";
    cout << "value: " << String << "\t size: " << sizeof(String) << endl;

    // how to assign value to variable
    int a = 2;
    int b (2);
    int c {2}; // will initialize with zero if you set it as {}

}