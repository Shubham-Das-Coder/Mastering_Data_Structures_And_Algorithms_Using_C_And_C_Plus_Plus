#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle // Defining structure
{
    int length;
    int breadth;
    char x; // Allocating 4 bytes but using only 1 byte
};

int main()
{
    struct Rectangle r1 = {10, 5};
    r1.length = 15;
    r1.breadth = 7;
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    return 0;
}