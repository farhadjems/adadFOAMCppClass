#include <iostream> 

using namespace std;

int main()
{
    // For loops
    cout << " for loops, updating condition i++\n";
    for (int i = 0; i < 10; ++i)
    {
        cout << " For loop 1 works!, i: " << i <<"\n";
    }
    cout << "------------------------------------";
    
    cout << " for loops, updating condition i+=2\n";
    for (int i = 0; i < 10; i+=2) // i = i + 2
    {
        cout << " For loop 2 works!, i: " << i <<"\n";
    }
    cout << "------------------------------------";
    
    cout << " for loops, updating condition i--\n";
    for (int i = 10; i > 0; i--)
    {
        cout << " For loop 3 works!, i: " << i <<"\n";
    }
    cout << "------------------------------------";
    
    //While Loops
    int i = 0;
    while (i < 10)
    {
        cout <<" while loop 1 works, i: " << i << endl;
        i +=2; 
    }
    i = 0;

    // do - while loop
    do
    {
        cout << "do-while loop 1 works, i: " << i << endl;
        i++;
    } while (i < 10);
}