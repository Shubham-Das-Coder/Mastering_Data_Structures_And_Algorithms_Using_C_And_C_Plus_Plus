#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int A[10] = {2, 4};

    cout << sizeof(A) << endl;
    cout << A[2] << endl;
    printf("%d\n", A[3]);

    return 0;
}