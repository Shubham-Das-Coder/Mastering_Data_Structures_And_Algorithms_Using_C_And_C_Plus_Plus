#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle // Defining structure
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r1 = {10, 5};
    printf("%d", sizeof(r1));
    return 0;
}