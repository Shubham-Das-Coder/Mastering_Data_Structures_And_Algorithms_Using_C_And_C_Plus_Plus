#include <stdio.h>

void fun(int n) // Function fun takes parameter an integer parameter named n
{
    if (n > 0)
    {
        printf("%d  ", n);
        fun(n - 1);
    }
}

int main()
{
    int x = 3;
    fun(x); // Calling the function fun for x
    return 0;
}