#include <iostream>

using namespace std;

int main()
{
    int A[] = {2, 4, 6, 8, 10};
    int n = 5;

    for (int x : A) // Using forish loop
        cout << x << endl;

    return 0;
}