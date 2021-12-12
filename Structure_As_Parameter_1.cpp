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
    struct Rectangle r = {10, 5}; // Creating an object of Rectangle r and also initializing the length as 10 and breadth as 5
    // In C++ writing the word struct is not mandatory but in C it is mandatory

    printf("Length = %d\nBreadth = %d\n", r.length, r.breadth);
    return 0;
}