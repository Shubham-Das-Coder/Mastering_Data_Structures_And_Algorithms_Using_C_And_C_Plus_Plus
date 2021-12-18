#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int A[5] = {1, 3, 5, 7, 9}; // Creating an array of size 5 in the stack
    int *p;                     // For creating an array in heap we must have a pointer
    // In that pointer we can create an array in heap and assign the address of that array to that pointer

    p = (int *)malloc(5 * sizeof(int)); // malloc function will return void type of pointer
    // So it must be type-casted before use

    p[0] = 2;
    p[1] = 4;
    p[2] = 6;
    p[3] = 8;
    p[4] = 10;

    for (i = 0; i < 5; i++)
    {
        printf("%d  ", A[i]);
    }

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d  ", p[i]);
    }

    return 0;
}
// This will create an array in heap
// Array A is having the values 1,3,5,7,9 and is of size 5
// p is just a pointer and is not an array and this pointer is having some address
// Then p is pointing to the first element
// But using that pointer we can access all the other elements