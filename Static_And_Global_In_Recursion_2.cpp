#include <stdio.h>

int fun(int n) // Creating a function named fun with return type int and taking a parameter int n
{
    if (n > 0)
    {
        return fun(n - 1) + n;
    }
    return 0;
}

int main()
{
    int r;
    printf("Enter the number\n");
    scanf("%d", &r);
    r = fun(r);
    printf("%d", r);
    return 0;
}