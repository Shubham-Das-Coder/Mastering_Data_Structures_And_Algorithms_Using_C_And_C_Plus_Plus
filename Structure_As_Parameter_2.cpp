#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle r)
// Creating a function named fun
// And taking struct Rectangle as parameter
// And the parameter type is call by value
// And return type is void so it is not going to return anything
{
    // Taking rectangle as parameter and printing its length and breadth
    cout << "Length" << r.length << endl
         << "Breadth" << r.breadth << endl;
}

int main()
{
    struct Rectangle r = {10, 5};

    fun(r); // Calling the function fun and passing r
    // This is the method of passing rectangle structure

    printf("Length = %d\nBreadth = %d\n", r.length, r.breadth);
    return 0;
}
// On running the program, the length and the breadth gets printed two times
// Fisrt time by the function
// And second time by the main function
// The important thing t learn is that when we pass a rectangle structure as parameter
// Then both the values length and breadth both will be copied in r(in line 13)
// A new structure will be created
// So this is call by value