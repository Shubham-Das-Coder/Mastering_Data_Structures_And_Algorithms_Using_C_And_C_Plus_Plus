#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *q;
    int i;

    p = (int *)malloc(5 * sizeof(int)); // Creating an array using p of size 5

    p[0] = 1;
    p[1] = 3;
    p[2] = 5;
    p[3] = 7;
    p[4] = 9;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", p[i]);  // Printing the values in the array
        printf("%d\n", &p[i]); // Printing the address of the array
    }

    return 0;
}