#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle // Defining structure
{
    int length;
    int breadth;
};
// It does not consume any memory unless and until we declare any variable

struct Rectangle r1; // Creating a variable outside the main function and is accessible to any function

int main()
{
    return 0;
}