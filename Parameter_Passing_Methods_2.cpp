// Swapping two numbers using call by address
#include <iostream>

using namespace std;

void swap(int *x, int *y) // Parameters must be of type pointers
// Pointers will be indirectly accessing num1 and num2
// Swap function is modifying actual parameters so it is not returning anything
// Swap function is modifying actual parameters so it need not to return anything
// Whatever is the result of the function they are directly reflected in actual parameters
// In some situation it may return something
// So when we want to directly work upon the actual parameters then go for call by address
// Swap function is modifying two variables num1 and num2 but a function can return only one value
// We want two results from swap function so better use call by address
{
    int temp;
    // Pointers can indirectly access actual parameters using their addresses
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int num1 = 10, num2 = 25; // If we have some variable and we want the same variable to modified then send it as address
    // Here we are having only int variables
    // But suppose we have a structure variable or object in C++ then it is better to send it by call by address

    swap(&num1, &num2); // When we call a function we pass the address of actual parameters and are taken in formal parameters that are pointers
    cout << "First Number : " << num1 << endl;
    cout << "Second Number : " << num2 << endl;

    return 0;
}