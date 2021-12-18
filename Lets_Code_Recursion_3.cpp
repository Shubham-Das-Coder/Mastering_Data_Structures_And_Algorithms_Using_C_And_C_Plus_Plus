#include <stdio.h>

void fun(int n) // Function fun takes parameter an integer parameter named n
{               // Head recursion
    if (n > 0)
    {
        fun(n - 1);
        printf("%d  ", n);
    }
}
// Here first the function will be called recursively and then it will be printed

int main()
{
    int x;
    printf("Enter an integer\n");
    scanf("%d", &x);
    fun(x); // Calling the function fun for x
    return 0;
}