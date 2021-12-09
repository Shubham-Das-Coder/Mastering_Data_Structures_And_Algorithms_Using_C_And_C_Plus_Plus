#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    Rectangle *p;      // Declaring pointer and when it is declared it is created inside a stack
    p = new Rectangle; // Creating an object in heap in C++ syntax
    // malloc function will allocate the memory and malloc returns a pointer so it is of type void so we must type cast as struct Rectangle
    // Here a rectangle object will be created in heap and pointer will be pointing on it

    p->length = 15; // Using arrow operator because we have a pointer to Rectangle structure
    p->breadth = 7; // Using arrow operator because we have a pointer to Rectangle structure

    cout << p->length << endl;  // Using arrow in case of pointer
    cout << p->breadth << endl; // Using arrow in case of pointer

    return 0;
}