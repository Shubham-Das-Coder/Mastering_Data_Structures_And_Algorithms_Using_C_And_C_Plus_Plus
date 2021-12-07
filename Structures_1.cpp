#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle // Defining structure
{
    int length;
    int breadth;
};
// It does not consume any memory unless and until we declare any variable

int main()
{
    struct Rectangle r1; // Creating a variable and is local to the main function
    return 0;
}