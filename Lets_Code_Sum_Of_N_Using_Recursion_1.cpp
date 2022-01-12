#include <stdio.h>

// We will write a function for finding the sum of first N natural numbers using recursion
// int sum which takes parameter n of integer type
int sum(int n)
{
    if (n == 0) // If value of n is equal to zero
        return 0;
    return sum(n - 1) + n;
}

int main()
{
    // Let us take a variable r for getting the result of the function sum
    // And we will pass the value 5
    // Then we will print this result
    int r;
    r = sum(5);
    printf("%d", r);
    return 0;
}