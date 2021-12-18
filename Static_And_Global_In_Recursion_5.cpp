#include <stdio.h>

int x = 0; // Creating a global variable and assigning it as zero
// It is assigned outside all thwee variables so it can be accessed by all the functions

int fun(int n) // Creating a function named fun with return type int and taking a parameter int n
{
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int r;
    r = fun(5);
    printf("%d\n", r);
    return 0;
}