#include <iostream>

using namespace std;

int add(int a, int b)
// int is the return type
// add is the name of the function
// a and b are the parameters being passed and are of int data type
{
    a++;
    cout << a << endl;
    return 0; // Function returns 0
}

int main()
{
    int num1 = 10, num2 = 15, sum;

    sum = add(num1, num2); // Calling the function sum and passing the variables num1 and num2
    // num1 will be copied in a and num2 will be copied in b

    cout << num1 << endl;
    return 0;
}