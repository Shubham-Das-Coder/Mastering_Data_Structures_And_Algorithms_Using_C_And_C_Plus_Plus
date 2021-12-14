#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
// Function for initializing
// Taking structure Rectangle by address
// Also taking length and breadth
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int perimeter(struct Rectangle r)
{
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}

int main()
{
    // Now from main function instead of directly accessing length and breadth
    // We can call the function initialize

    Rectangle r = {0, 0};

    // Here we should have temporary variables l and b
    int l, b;

    printf("Enter length and breadth\n");
    cin >> l >> b; // l and b are temporary variables for user interaction

    initialize(&r, l, b); // Calling the function initialize
    // Which will take address of r and length and breeadth
    // Now instead of directly accessing length and breadth of a rectangle
    // It is onitialized by calling initialize function

    int a = area(r);

    int peri = perimeter(r);

    printf("Area = %d\nPerimeter = %d\n", a, peri);

    return 0;
}
// So this program is returned using structure and functions