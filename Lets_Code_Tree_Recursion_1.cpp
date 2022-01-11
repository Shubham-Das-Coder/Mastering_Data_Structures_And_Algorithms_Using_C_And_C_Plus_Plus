#include <stdio.h>

// Here we will write down a function for tree recursion
// The one we have already discussed
// Function fun which takes parameter n
void fun(int n)
{
    if (n > 0) // If n is greater than zero
    {
        printf("%d  ", n); // Print the value of n
        // It will call itself by passing (n-1)
        fun(n - 1);
        fun(n - 1);
    }
}

int main()
{
    // Calling the function fun in the main function by passing 3
    fun(3);

    return 0;
}