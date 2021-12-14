#include <iostream>

using namespace std;

class Arithmetic
{
private:
    int a;
    int b;

public:
    Arithmetic(int a, int b);
    int add();
    int sub();
};
Arithmetic::Arithmetic(int a, int b)
{
    this->a = a;
    this->b = b;
}
int Arithmetic::add()
{
    int c;
    c = a + b;
    return c;
}
int Arithmetic::sub()
{
    int c;
    c = a - b;
    return c;
}

int main()
{
    Arithmetic ar(10, 5);

    cout << "Add : " << ar.add() << endl;
    cout << "Subtract : " << ar.sub() << endl;

    return 0;
}
// If we are implementing the function outside the class
// Then we should have the declaration of the function inside the class
// Now the functions are outside so they should show their scope
// Means they belong to the class Arithmetic