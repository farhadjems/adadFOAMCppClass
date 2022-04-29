#include <iostream> 

using namespace std;


int main ()
{
    // OR "||" operator
    if (true || false)
    {
        cout << "with OR, you need just one true condition\n";
    }
    // AND "&&"
    if (true && true)
    {
        cout << "with AND, All conditions must be true\n";
    }
    // XOR "^"
    if (true ^ false ^ false)
    {
        cout << "with XOR, just one condition must be true\n";
    }

    //short circuiting
    /*
        when the operator OR is used, 
        since you need just one true condition to move on, 
        put the condition first which you think might be true
    */
   if (true || false)
   {
       cout << "Ive put true as the first bool variable, so that it doesnt check the next false!\n";
   }
   
   /*
        when the operator is AND
        since you need just one false condition to skip,
        put the condition first which you think might be false
   */
    if (false && true)
    {
        cout << " you wont see this message in terminal!\n";
    }
    cout << "Ive put false as the first bool variable, so that it doesnt check the next true\n";
}