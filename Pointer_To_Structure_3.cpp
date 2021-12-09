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
    Rectangle r = {10, 5}; // We can skip struct in C++

    // When we have normal variable we access them using dot(.) operator
    cout << r.length << endl;  // Accessing length
    cout << r.breadth << endl; // Accessing breadth

    Rectangle *p = &r;
    cout << p->length << endl;  // Using arrow in case of pointer
    cout << p->breadth << endl; // Using arrow in case of pointer

    return 0;
}