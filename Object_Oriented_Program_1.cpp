#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
// Here we are having a structure for rectanlge having length and breadth
{
    int length;
    int breadth;

    void initialize(int l, int b)
    // Does it need to take the parameter
    // No, so remove it
    // Directly it can access length and breadth
    // Because this is inside the structure
    // This is initialize function which is initializing a rectangle
    {
        length = l;
        breadth = b;
    }

    int area()
    // Does this area has to take a rectangle as a parameter
    // No, so remove it
    // Area function is using a rectangle for findong the area
    {
        return length * breadth; // Directly access length and breadth
        // Because they are available here
        // All are inside rectangle structure only
    }

    int perimeter() // Rmeove rectangle
    // Perimeter function is using rectangle as parameter and finding its perimeter
    {
        int p;
        p = 2 * (length + breadth); // Directly access length and breadth
        return p;
    }
};
// So we have included all three functions which are working for a rectangle
// Inside a rectangle structure itself
// This is still structure only
// And inside the structures we can write functions in C++

int main()
// Main function is creating a variable of type rectangle
// Calling initialize function to initialize it
// Area and perimeter function to calculate area and perimeter
// Now a question arises
// For whom is this initialize function working?
// It is working for a rectangle structure
// For whom is this area is working?
// For a structure
// For whom is this perimeter is working?
// For a structure
// All are working for a structure then they are returned outside the structure
// Why to write them outside?
// Write them inside only
// So shift the end of the initialize function's bracket
{
    Rectangle r = {0, 0}; // In main function we will create a variable of type structure only

    int l, b;

    printf("Enter length and breadth\n");
    cin >> l >> b;

    r.initialize(l, b); // Instead of calling initialize and passing r, we will say r.
    // Because r itself is having initialize function now

    int a = r.area(); // Instead of giving r as a parameter to area we will write r.area

    int peri = r.perimeter(); // Instead of giving r as a parameter to perimeter we will write r.perimeter

    printf("Area = %d\nPerimeter = %d\n", a, peri);

    return 0;
}
// This is object orientation
// So what is an object?
// Writing the data members and all the member functions together at a single place can define a class
// And we can create its object
// So these are object
// Object will have its properties and its method that is membre functions
// But I have written a structure and you can write structure in place of class in C++
// All the functions are inside structure
// This is object orientation