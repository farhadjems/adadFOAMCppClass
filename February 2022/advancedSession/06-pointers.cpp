#include <iostream> 

using namespace std;

int main()
{
    int d = 2; // variable d is defined in stack memory
    int *pointerD = &d; // pointerD has the address of variable d
    cout << "variable d: " << d << endl;
    cout << "pointerD: " << pointerD << endl;
    cout << "value in the address kept by pointerD: " << *pointerD << endl;
    cout << "-----------------------------------\n";
    
    int *pointerC = new int; // pointerC initialized with the address of memomry in dynamic memory part (heap memomry)
    cout << "pointerC: " << pointerC << endl;
    cout << "value in the address kept by pointerC: " << *pointerC << endl;
    cout << "-----------------------------------\n";
    
    // NULL to pointers
    // int *pointerA = NULL; // pointerA is empty
    // cout << "pointerA: " << pointerA << endl;
    // cout << "value in the address kept by pointerA: " << *pointerA << endl; // why segmentation fault ???
    // int *pointerB = nullptr; // pointerB is empty
    // cout << "pointerB: " << pointerB << endl;
    // cout << "value in the address kept by pointerB: " << *pointerB << endl; // why segmentation fault ???
    cout << "-----------------------------------\n";

    // pointer to pointer
    int **pointerPointerD = &pointerD; // you can put pointer variable address into pointer-to-pointer variable
    cout << "variable d: " << d << endl; 
    cout << "pointerD: " << pointerD << endl;
    cout << "value in the address kept by pointerD: " << *pointerD << endl;
    cout << "pointerPointerD: " << pointerPointerD << endl;
    cout << "value in the address kept by pointerPointerD: " << *pointerPointerD << endl;
    cout << "-----------------------------------\n";
    d = 3;
    cout << "changing the value of d by assigning value 3 to variable" << endl;
    cout << "variable d: " << d << endl; 
    cout << "pointerD: " << pointerD << endl;
    cout << "value in the address kept by pointerD: " << *pointerD << endl;
    cout << "pointerPointerD: " << pointerPointerD << endl;
    cout << "value in the address kept by pointerPointerD: " << *pointerPointerD << endl;
    cout << "-----------------------------------\n";
    *pointerD = 4;
    cout << "changing the value of d by assgining value 4 to pointer" << endl;
    cout << "variable d: " << d << endl; 
    cout << "pointerD: " << pointerD << endl;
    cout << "value in the address kept by pointerD: " << *pointerD << endl;
    cout << "pointerPointerD: " << pointerPointerD << endl;
    cout << "value in the address kept by pointerPointerD: " << *pointerPointerD << endl;
    cout << "-----------------------------------\n";
    **pointerPointerD = 5;
    cout << "changing the value of d by assgining value 5 to pointerPointerD" << endl;
    cout << "variable d: " << d << endl; 
    cout << "pointerD: " << pointerD << endl;
    cout << "value in the address kept by pointerD: " << *pointerD << endl;
    cout << "pointerPointerD: " << pointerPointerD << endl;
    cout << "value in the address kept by pointerPointerD: " << *pointerPointerD << endl;
    cout << "-----------------------------------\n";

    // !!! Note that you have to delete them in order to free heap memory !!!
    // delete pointerA;
    // delete pointerB;
    delete pointerC;

    // You cant delete pointerD and pointerPointerD, why ???
    // ! Hint: d is defined in stack memory :)
    // delete pointerD;
    // delete pointerPointerD;

    // Pointers and Arrays
    int sizeX = 3;
    int sizeY = 4;
    int **pointerArray = new int*[sizeX];
    for (int i = 0; i < sizeX; i++)
    {
        pointerArray[i] = new int[sizeY];
        for (int j = 0; j < sizeY; j++)
        {
            pointerArray[i][j] = (i+1) * (j+1);
        }
    }
    
    //  !note 1: pointers are not arrays but you can use them like arrays!
    // !note 2: arrays are some sort of pointers!


}