#include <stdio.h>

// Here we will write two functions

// But function funB is used in function funA
// Which is declared afterwards
// So it will show an error
// To avoid this we must define the function prototype
void funB(int n);

// Function A which takes parameter n of integer type
void funA(int n)
{
    if (n > 0) // If n is greater than zero
    {
        printf("%d  ", n); // Print n
        // And call function B for value (n-1)
        funB(n - 1);
    }
}

// Function B which takes parameter n of integer type
void funB(int n)
{
    if (n > 1) // If n is greater than 1
    {
        printf("%d  ", n); // Print n
        // And then call function A by passing (n/2)
        funA(n / 2);
    }
}

int main()
{
    // Calling function funA in the main function by passing value 20
    funA(20);

    return 0;
}