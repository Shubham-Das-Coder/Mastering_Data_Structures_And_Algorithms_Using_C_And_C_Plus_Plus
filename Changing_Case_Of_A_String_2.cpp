#include <stdio.h>

int main()
{
    char A[] = "WeLcOmE";
    int i;

    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 65 && A[i] <= 90) // If uppercase
        {
            A[i] += 32; // Then convert it to lowercase
        }
        else if (A[i] >= 'a' && A[i] <= 'z') // If lowercase
        {
            A[i] -= 32; // Then convert it to uppercase
        }
    }

    printf("%s", A);

    return 0;
}