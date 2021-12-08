#include <iostream>

using namespace std;

int main()
{
    int a = 10; // Created inside stack
    int &r = a; // Reference and it must be initialized
    int b = 30;
    r = b;
    cout << a << endl
         << r << endl;
    return 0;
}