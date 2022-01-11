#include <stdio.h>

// Writing a function fun which takes parameter n of integer type

int fun(int n)
{
    if (n > 100) // If n s greater than 100
        return n - 10;
    return fun(fun(n + 11)); // Else will return this value
}

int main()
{
    int r;       // Taking some temporary variable named r
    r = fun(30); // Calling the function fun and passing value 30 and storing the result in variable r
    printf("%d\n", r);
    return 0;
}