#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle *p) // Taking pointer of type rectangle named p
// This is not variable of type rectangle
// It is a pointer of type rectangle
{
    p->length = 20; // So for pointer we use arrow and not dot
    // And the function is modifying its length
    cout << "Length" << p->length << endl
         << "Breadth" << p->breadth << endl;
    // Printing new length and breadth
}

int main()
{
    struct Rectangle r = {10, 5}; // We have a structure type variable with 10 and 5 as its value
    fun(&r);                      // Passing address of the rectangle

    printf("Length = %d\nBreadth = %d\n", r.length, r.breadth); // When it comes back to main function it will print legnth and breadth
    // So will it change the length of this refctangle?
    // Yes because this is call by address
    return 0;
}
