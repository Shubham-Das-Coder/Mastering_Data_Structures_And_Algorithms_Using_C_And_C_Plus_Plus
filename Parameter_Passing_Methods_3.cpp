// Call by reference
// Supported in C++
#include <iostream>

using namespace std;

void swap(int &x, int &y)
// The swap function may become  inline function
// It will not become inline function compulsory
// It all depends on the compiler
// It depends on how the compiler implements references
// Conceptually references are nicknames and not pointers
// But compiler may implement them as pointer
// But there are two possibilities
// 1.A compiler csn convert the swap function as an inline function and copy the entire code in line number 27
// 2.It can make these as pointers
{
    // In references we dont have to write * for accessing datas
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int num1 = 10, num2 = 15;

    swap(num1, num2); // Remove &

    cout << "First number : " << num1 << endl;
    cout << "Second number : " << num2 << endl;

    return 0;
}
// If we have two variables one is call by reference and the other is not call by reference
// Then will the compiler make it as an inline function?
// No it is not possible for a compiler to do
// Only one parameter is call by reference while the other one is not call by reference
// So definitely it will not make it as inline function
// But again it all depends on the compiler how it is going to generate the machine code