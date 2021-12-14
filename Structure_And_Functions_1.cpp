#include <iostream>
#include <stdio.h>

using namespace std;

// Defining a structure which is combining length and breadth
struct Rectangle
{
    int length;
    int breadth;
};
// What about this area and perimeter?
// These are meant for Rectangle
// So they should not take length and breadth separately
// They should take Rectangle as parameter

int area(struct Rectangle r) // struct keyword is not mandatory in C++
{
    return r.length * r.breadth;
}

int perimeter(struct Rectangle r) // struct keyword is not mandatory in C++
{
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}

int main()
{
    // Inside main function we will not be declaring length and breadth
    // But we will be declaring a variable of type Rectangle
    Rectangle r = {0, 0}; // Initializing it as 0,0

    int length = 0, breadth = 0;

    printf("Enter length and breadth\n");
    cin >> r.length >> r.breadth;
    // Here we cannot access length and breadth directly
    // So we should use r.length and r.breadth

    int a = area(r); // To this area we should not pass length and breadth
    // We should pass a complete rectangle
    // The benefit over here is that we were passign two things to area and perimeter
    // But now those two things are combined together inside a box called Rectangle
    // So area can access length and breadth
    // And perimeter can also access length and breadth
    // And the parameter passing method is called call by value

    int peri = perimeter(r);

    printf("Area = %d\nPerimeter = %d\n", a, peri);

    return 0;
}
// Here working of the program has not changed
// But the way in which program is returned has been changed
// But the final result is same