#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Bubble(int A[], int n)
{
    int i, j, flag = 0;

    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int A[] = {3, 7, 9, 10}, n = 4; // Array is already sorted

    Bubble(A, 4);

    for (int i = 0; i < 4; i++) // Running the loop for 4 times
    {
        printf("%d  ", A[i]);
    }

    return 0;
}