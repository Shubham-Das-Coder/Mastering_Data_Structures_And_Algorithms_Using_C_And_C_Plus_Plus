#include <stdio.h>

int fun(int n) // Creating a function named fun with return type int and taking a parameter int n
{
    static int x = 0;
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