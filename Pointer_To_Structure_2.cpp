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
    return 0;
}