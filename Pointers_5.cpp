#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p;
    p = A; // No ampersand required when an array name is being given to pointer because name of array is the starting address of the array

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}