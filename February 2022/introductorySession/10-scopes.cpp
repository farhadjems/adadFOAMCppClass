#include <iostream>

using namespace std;

int b = 3;

int maxRelativeToB(int a)
{
    if (a > b)
    {
        return a;
    }
    else 
    {
        return b;
    } 
}

int findMax(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int a = 10;
    int maxNumber = maxRelativeToB(a);
    cout << " max number is (with respect to b): " << maxNumber << endl;
    int c = 15;
    maxNumber = findMax(a, c);
    cout << " max number is (between a, c): " << maxNumber << endl;
}