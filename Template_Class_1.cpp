#include <iostream>

using namespace std;

class Arithmetic
// This is class Arithmetic having two private members of integer type
{
private:
    int a;
    int b;

public:
    Arithmetic(int a, int b) // Parameter is taking two integers and their names are also a and b
    // This is a constructor which is used for initializing a and b
    {
        this->a = a; // this refers to member of the class
        this->b = b; // this refers to member of the class
        // this is a pointer to a current object
    }
    int add()
    {
        int c;
        c = a + b;
        return c;
    }
    int sub()
    {
        int c;
        c = a - b;
        return c;
    }
};

int main()
{
    // Creating an object of Arithmetic
    Arithmetic ar(10, 5); // Initializing by passing parameters 10 and 5
    // So this 10 and 5 are passed to a and b
    // And they are assigned to data members a and b of object ar
    // So this means object ar
    // We are calling a constructor upon ar
    // So this dot a this dot b means a and b data members of ar object that is current object

    cout << "Add : " << ar.add() << endl;
    cout << "Subtract : " << ar.sub() << endl;

    return 0;
}