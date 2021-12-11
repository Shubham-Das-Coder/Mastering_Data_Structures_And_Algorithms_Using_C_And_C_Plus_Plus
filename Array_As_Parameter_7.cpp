#include <iostream>

using namespace std;

void fun(int A[], int n)
// Array size in man function is 5
// But how does function fun will know about the size of the array
// So usually we pass size also as parameter
// So when we pass array as a parameter to a function we also pass the size of the array or number of elements in that array
{
    for (int i = 0; i < n; i++) // Here in for loop it will go upto n instead of 5
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