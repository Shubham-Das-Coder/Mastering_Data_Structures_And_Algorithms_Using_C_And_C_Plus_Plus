// Program to find number of words in a string
#include <stdio.h>

int main()
{
    char A[] = "How are you";

    int i, word = 1;

    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ' ')
        {
            word++;
        }
    }

    printf("Number of words : %d", word);

    return 0;
}