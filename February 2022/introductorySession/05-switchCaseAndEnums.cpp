#include <iostream>

using namespace std;

// enum
enum menu
{
    option1 = 1, option2 = 2, option3 = 3
};


int main()
{
    int a = 0;
    cout << " choose one option:\n 1.option1\t2.option2\t3.option3\n";
    cin >> a;
    cout << "--------------------------------\n using if conditions:\n";
    if (a == 1)
    {
        cout << " you have chosen option 1";
    }
    
    if (a == 2)
    {
        cout << " you have chosen option 2";
    }

    if (a == 3)
    {
        cout << " you have chosen option 3";
    }
    
    // using switch case
    cout << "---------------------------------\n using switch case:\n";
    switch (a)
    {
    case option1:
        cout << " you have chosen option 1";
        break;
    
    case option2:
        cout << " you have chosen option 2";
        break;
    
    case option3:
        cout << " you have chosen option 3";
        break;
    
    default:
        cout << " you have chosen somtehing else!";
        break;
    }
    
    cout << endl;

    // switch case and enums
    
}