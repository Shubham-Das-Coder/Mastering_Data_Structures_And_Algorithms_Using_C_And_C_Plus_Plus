#include <iostream>

using namespace std;

void fun(int *A, int n)
// Instead of using square brackets, we can even use * and we can treat it as an array
{
    for (int i = 0; i < n; i++)
        cout << A[i] << endl;
}

int main()
{
    int A[] = {2, 4, 6, 8, 10};
    int n = 5;
    fun(A, n);
    for (int x : A)
        cout << x << "  ";

    return 0;
}