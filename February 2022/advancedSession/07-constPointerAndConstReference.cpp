#include <iostream> 

using namespace std;

int main()
{
    // *POINTERS
    // ! NOTE THAT NORMAL VARIABLES KEEP VALUES AND POINTERS KEEP ADDRESSES
    // modifiable pointer, modifiable variable
    int num1 = 1; // modfiable variable , you can modify its value;
    int* pnum1 = &num1; // modifiable pointer pointing into modifiable variable,    
    *pnum1 = 2; // you can modify the the value of pointed variable
    pnum1 = new int; // you can modify the address kept by pointer, its not const!
    delete pnum1;

    // pointer to const variable, modifiable variable
    int num2 = 2; // modifiable variable
    const int* pnum2 = &num2; // pointing to const variable (although num2 is not const!)
    // ! you cant modify the value of the variable pointed by pointer, since the address is considered as a const variable
    //*pnum2 = 3; //compiler error
    pnum2 = new int; // tou can modify the value kept by pointer, since the pointer itself is not a const variable
    delete pnum2;

    //const pointer, modifiable variable
    int num3 = 3; // modifiable variable
    int* const pnum3 = &num3; // const pointer pointing to modifiable variable (the pointer itself is a const variable)
    *pnum3 = 4; // since the kept address by pointer itself is not a const variable, you can change its value 
    // ! since the pointer is a const variable you cannot change its value, so you cannot change the address kept by this pointer
    // pnum3 = new int; // compiler error
    // delete pnum3; // you cant delete it! its pointing to a variable defined in stack memory :)

    // const pointer to const variable, modifiable variable
    int num4 = 4; // modifiable variable
    const int* const pnum4 = &num4; // const pointer pointing to a modifiable variable which is considered as a const variable
    // ! since the pointed variable is considered as a const variable, you can not modify it (although that variable is not a const)
    // *pnum4 = 5; // compiler error  
    // ! since the the pointer itself is a const variable, you cannot modify the value stored in it!
    // pnum4 = new int; // compiler error
    // delete pnum4; // you cant delete it! its pointing to a variable defined in stack memory :)

    // &REFERENCES
    // NOTE THAT REFERENCES CAN KEEP THE ADDRESS TOO! AND YOU HAVE TO INITIALIZE THEM
    // int &rnum; compiler error ! its not initialized

    int num5 = 5; // modfiable variable
    int num5prime = 0;
    int& rnum5 = num5; // reference
    rnum5 = 6;
    cout << "changing value by reference: " << rnum5 << endl;
    rnum5 = num5prime; // you can change the variable which refrence is referencing to
    cout << "changing the variable referenced by reference: " << rnum5 << endl;

    int num6 = 6;
    int num6prime = 0;
    const int& rnum6 = num6; // it is equal to const pointer to const variable
    // rnum6 = 7; // compiler error
    // rnum6 = num6prime; // compiler error


    int num7 = 7;
    int num7prime = 0;
    int const& rnum7 = num7; // just like above example
    // rnum7 = 8; // compiler error
    // rnum7 = num7prime; // compiler error

    // int num8 = 8;
    // int num8prime = 0;
    // const int const &rnum8 = num8; // meaningless! one of the const modifiers is redundant.
    // rnum8 = 9;
    // rnum8 = num8prime;
}