#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    // Creating array in heap
    int *p;
    p = (int *)malloc(5 * sizeof(int)); // C method
    p[0] = 10;
    p[1] = 15;
    p[2] = 23;
    p[3] = 31;
    p[4] = 46;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl; // Pointer acting like name of an array
    }

    return 0;
}