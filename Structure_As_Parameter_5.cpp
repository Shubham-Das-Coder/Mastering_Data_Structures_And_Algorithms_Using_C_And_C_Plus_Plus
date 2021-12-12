#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
struct Rectangle *fun()
// Now we will write one function which will return a pointer of type Rectangle
// It will create an object of type rectangle on heap by using a pointer
{
    struct Rectangle *p;
    p = new Rectangle; // C++ syntax
    // Now we have created an object of type rectangle using a pointer and it will be created in heap

    // Initializing length and breadth
    p->length = 15;
    p->breadth = 7;

    return p; // Returning the address of the structure
}
int main()
{
    struct Rectangle *ptr = fun(); // Function is not taking any parameter
    // We dont have to pass any parameters

    cout << "Length " << ptr->length << endl
         << "Breadth " << ptr->breadth << endl;
    // ptr is a pointer sowe should use arrow

    return 0;
}
// This program is demonstrating how a function can return a pointer to an object created in heap
// And that can be accessed using main function also
// It can be accessed using any function if that pointer is available
// Object is not created inside main function
// Object is created by fun function and it is taken by main and then printed
// Function fun has created in heap and initialized the object
// So this is returning a pointer to a structure
// So job of a function is to create an object  of structure and initialize and return it