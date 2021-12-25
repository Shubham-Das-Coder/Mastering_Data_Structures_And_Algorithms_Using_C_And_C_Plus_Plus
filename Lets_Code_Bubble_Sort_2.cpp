// We can make this code adaptive by introducing a flag variable
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Bubble(int A[], int n)
{
    int i, j, flag = 0; // Initializing the variable flag as zero

    for (i = 0; i < n - 1; i++)
    {
        // Before the start of every pass we should make flag as zero
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
                flag = 1; // When it is swapping we should make the flag as one means there is a swap
            }
        }
        if (flag == 0) // If no swapping is done it means the array is sorted
        {
            break; // So break
        }
    }
}

int main()
{
    int A[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2}, n = 10;

    Bubble(A, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", A[i]);
    }

    return 0;
}