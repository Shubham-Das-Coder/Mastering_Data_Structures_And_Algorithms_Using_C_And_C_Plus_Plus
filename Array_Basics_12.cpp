#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter Size Of The Array\n";
    cin >> n;
    int A[n];
    A[0] = 2;
    for (int x : A)
    {
        cout << x << endl;
    }

    return 0;
}