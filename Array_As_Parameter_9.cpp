#include <iostream>

using namespace std;

void fun(int *A, int n)
{
    // When this array is passed by address then if we change anything inside this array will it change the actual array?
    // Yes, because its a pointer whether you write * or [] it is a pointer only
    // So when it is a pointer on changing the value it gets changed
    A[0] = 15;
    // It gets changed to 15 because we are calling the function fun which changes the value of A[0] to 15
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