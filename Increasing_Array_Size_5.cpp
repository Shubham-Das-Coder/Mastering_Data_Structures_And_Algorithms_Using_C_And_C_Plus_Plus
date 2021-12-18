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

    // One thing we have missed that p array before p is pointing to q we should delete that previous array
    free(p); // Deleting the previous array

    p = q;    // After freeing that memory p should point on q
    q = NULL; // Then q should be made as NULL

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", p[i]);
    }

    return 0;
}