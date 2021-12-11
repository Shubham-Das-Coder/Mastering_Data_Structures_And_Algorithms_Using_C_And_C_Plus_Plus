#include <iostream>

using namespace std;

void fun(int A[])
// Function name is fun, taking array as parameter and the return type is void that is it does not return anything
// Array will be taken by address
// So A is a pointer to this array A
// This A belongs to the function
//  Arrays are always passed by address
//  We cannot pass them by value
//  We cannot pass them by reference
{
    for (int a : A) // Cannot use forish loop for a pointer
        // We can use forish loop upon an array
        // So when you pass to some  other function inside that function you cannot access that array using forish loop because the parameter is a pointer
        cout << a << endl;
}

int main()
{
    int A[] = {2, 4, 6, 8, 10}; // This A belongs to the main function
    int n = 5;
    fun(A);         // Arrays are always passed by address and parameter is a pointer to an array which can access array
    for (int x : A) // Using forish loop
        cout << x << endl;

    return 0;
}