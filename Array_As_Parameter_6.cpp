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
    for (int i = 0; i < 5; i++) // Here we should use a for loop
        cout << A[i] << endl;
    // Forish loop works upon an array which is declared within the same function
    // Because it works depending on the size of the array
}

int main()
{
    int A[] = {2, 4, 6, 8, 10}; // This A belongs to the main function
    int n = 5;
    fun(A);         // Arrays are always passed by address and parameter is a pointer to an array which can access array
    for (int x : A) // Using forish loop
        cout << x << "  ";

    return 0;
}