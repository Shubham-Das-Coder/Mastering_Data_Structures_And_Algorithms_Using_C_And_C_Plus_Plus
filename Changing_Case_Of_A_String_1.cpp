#include <stdio.h>

int main()
{
    char A[] = "WELCOME";
    int i;

    for (i = 0; A[i] != '\0'; i++)
    {
        A[i] = A[i] + 32; // As difference of ASCII values are 32 between uppercase and lowercase
    }

    printf("%s", A);

    return 0;
}