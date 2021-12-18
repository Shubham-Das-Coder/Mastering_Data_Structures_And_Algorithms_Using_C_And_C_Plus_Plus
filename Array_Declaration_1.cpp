#include <stdio.h>

int main()
{
    int A[5];                     // Declaring an array of size 5 and not initializing it
    int B[5] = {1, 2, 3, 4, 5};   // Declaring an array of size 5 and initializing it
    int C[10] = {2, 4, 6};        // Declaring an array of size 10 and initializing only 3 values
    int D[5] = {};                // Declaring an array of size 5 and assigning first element as zero and the rest of the elements will also be assigned as zero because the first element is zero
    int E[] = {1, 2, 3, 4, 5, 6}; // Declaring an array but not giving its size and initialing it

    printf("\nPrinting the first array\n");
    for (int a = 0; a < 5; a++)
    {
        printf("%d  ", A[a]);
    }

    printf("\nPrinting the second array\n");
    for (int b = 0; b < 5; b++)
    {
        printf("%d  ", B[b]);
    }

    printf("\nPrinting the third array\n");
    for (int c = 0; c < 10; c++)
    {
        printf("%d  ", C[c]);
    }

    printf("\nPrinting the fourth array\n");
    for (int d = 0; d < 5; d++)
    {
        printf("%d  ", D[d]);
    }

    printf("\nPrinting the fifth array\n");
    for (int e = 0; e < 6; e++)
    {
        printf("%d  ", E[e]);
    }

    return 0;
}