#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle r) // Calll by value and this is also of type structure rectangle
// So use dot operator for accessing the members
{
    // In call by value mechanism if any changes are done to this rectangle that will not change to the rectangle in main function
    r.length = 20;
    cout << "Length" << r.length << endl
         << "Breadth" << r.breadth << endl;
}

int main()
{
    struct Rectangle r = {10, 5}; // Structure r is declared here so when we have a variable of type structure we use dot operator for accessing the members

    fun(r);

    printf("Length = %d\nBreadth = %d\n", r.length, r.breadth);
    return 0;
}
