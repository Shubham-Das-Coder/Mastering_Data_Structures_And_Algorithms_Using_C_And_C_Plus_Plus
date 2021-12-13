#include <iostream>
#include <stdio.h>

using namespace std;

int area(int length, int breadth) // Creating a function named area with return type as int
{
    return length * breadth; // Directly returning the area
}

int perimeter(int length, int breadth)
{
    int p;                      // Initializing a variable
    p = 2 * (length + breadth); // Storing the perimeter in the variable p

    return p; // Returninting p
}

int main()
{
    int length = 0, breadth = 0;

    // Main function is interacting with the user and taking length and breadth
    printf("Enter length and breadth\n");
    cin >> length >> breadth;

    int a = area(length, breadth);         // Taking help of function area to calculate the area
    int peri = perimeter(length, breadth); // Taking help of perimeter to calculate the perimeter

    printf("Area = %d\nPerimeter = %d\n", a, peri); // Displaying area and perimeter

    return 0;
}