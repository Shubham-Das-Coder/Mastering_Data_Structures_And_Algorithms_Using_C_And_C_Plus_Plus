#include <stdio.h>

int fun(int n) // Creating a function named fun with return type int and taking a parameter int n
{
    static int x = 0; // Creating a static variable
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
    printf("Enter the number\n");
    scanf("%d", &r);
    r = fun(r);
    printf("%d", r);
    return 0;
}