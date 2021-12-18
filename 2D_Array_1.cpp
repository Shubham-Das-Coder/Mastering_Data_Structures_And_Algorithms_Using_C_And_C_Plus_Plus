#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Method 1
    int A[3][4] = {{1, 2, 3, 4}, {1, 3, 5, 7}, {2, 4, 6, 8}}; // Creating an array inside the stack
    // Creating an array of dimension 3x4
    // Each row is having 4 elements because there are 4 columns

    // Method 2
    int *B[3]; // Taking an array of pointers of size 3
    // Here rows were created inside the stack
    //  3 is for rows
    //  This array of pointers will be created inside stack

    // Then to each location in this array we can create an array in heap and assign it
    // So for each location we will create an array inside heap and assign it
    // Then create an integer array

    B[0] = (int *)malloc(4 * sizeof(int)); // This is for the first location

    B[1] = (int *)malloc(4 * sizeof(int)); // This is for the second location

    B[2] = (int *)malloc(4 * sizeof(int)); // This is for the third location

    // These three arrays are created in heap

    // Third method
    int **C; // Creating a double pointer
    // In C language we should declare the variables in the beginning
    // It is a double pointer
    // So first of all we should declare an array for rows

    C = (int **)malloc(3 * sizeof(int *)); // The first row is itself created in heap

    C[0] = (int *)malloc(4 * sizeof(int));

    C[1] = (int *)malloc(4 * sizeof(int));

    C[2] = (int *)malloc(4 * sizeof(int));

    // And the rest of the three arrays are also created heap

    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d  ", A[i][j]); // Array A will be printed which is created inside stack
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d  ", B[i][j]); // Garbage values will be printed as it is not initialized
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d  ", C[i][j]); // Garbage values will be printed as it is not initialized
        }
        printf("\n");
    }

    return 0;
}