#include <iostream>

using namespace std;

int add(int a, int b)
// int is the return type
// add is the name of the function
// a and b are the parameters being passed and are of int data type
{
    int c;     // Temporary variable for sum
    c = a + b; // Adding the numbers

    return c; // Function returns c
}

int main()
{
    int num1 = 10, num2 = 15, sum;

    sum = add(num1, num2); // Calling the function sum and passing the variables num1 and num2
    // num1 will be copied in a and num2 will be copied in b

    cout << "Sum = " << sum;
}