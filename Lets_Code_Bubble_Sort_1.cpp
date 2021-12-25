#include <stdio.h>

// Writing a function for swapping
void swap(int *x, int *y)
// The name of the function is swap and its return type is void
// It takes two pointers x and y
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Let us write a function to perform bubble sort
void Bubble(int A[], int n)
// The name of the function is Bubble and its return type is void
// It takes an integer type array and also its size
{
    int i, j;
    // Here we are taking some temporary variables i and j for using it in for loops

    for (i = 0; i < n - 1; i++) // As the loop must run for (n-1) times
    {
        for (j = 0; j < n - i - 1; j++) // We need not to compare for(n-i)
        {
            if (A[j] > A[j + 1]) // If the condition is true
            {
                swap(&A[j], &A[j + 1]); // Swapping the addresses
            }
        }
    }
}

int main()
{
    // Here inside main function we will declare an array having few elements
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2}, n = 10;
    // Here we have taken 10 elements and and a variable n and is initialized as 10

    // Calling the Bubble function
    Bubble(A, 10); // Passing an array to the function and the number of elements which is 10

    for (int i = 0; i < 10; i++)
    // Writing a for loop to display the array

    {
        printf("%d  ", A[i]);
    }

    return 0;
}