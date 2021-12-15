#include <iostream>

using namespace std;

template <class T> // Creating a template
// T is a type of template

class Arithmetic
{
private:
    T a; // This a should be of T type
    T b; // This b should be of T type
    // But dont convert everything to T
    // Be careful
    // Sometimes temporary variables are there
    // They are integer or float
    // They should remain same only

public:
    Arithmetic(T a, T b); // This should also be template
    T add();              // Inside the class it should be changed
    T sub();              // Inside the class it should be changed
};                        // The scope of the template ends here
// So the class has become a template
// The body of the class has closed
// So the template has finished

// Now the functions are outside

// So for this we shuld again write class template
template <class T>

// But still something is missing
// The class Arithmetic is template
// So we should pass a template argument to that class along with scope resolution

Arithmetic<T>::Arithmetic(T a, T b) // This should be T
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add() // Return type is template and the class should also be template
{
    T c; // Local variable c which is adding two integers should be a template type
    c = a + b;
    return c;
}

template <class T>
T Arithmetic<T>::sub() // Class name should take T
{
    T c; // Local variable should also be T
    c = a - b;
    return c;
}

int main()
{
    Arithmetic<int> ar(10, 5); // Inside the main function when we are creating an object of this Arithmetic we should mention int

    cout << "Add : " << ar.add() << endl;
    cout << "Subtract : " << ar.sub() << endl;

    return 0;
}