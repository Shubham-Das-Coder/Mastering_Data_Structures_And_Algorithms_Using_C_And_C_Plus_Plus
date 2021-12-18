#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *q;
    int i;

    p = (int *)malloc(5 * sizeof(int));

    p[0] = 1;
    p[1] = 3;
    p[2] = 5;
    p[3] = 7;
    p[4] = 9;

    q = (int *)malloc(10 * sizeof(int));

    for (i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    p = q;    // p is pointing on q
    q = NULL; // q pointer is made as NULL so q is not pointing anywhere

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", q[i]);
    }

    return 0;
}