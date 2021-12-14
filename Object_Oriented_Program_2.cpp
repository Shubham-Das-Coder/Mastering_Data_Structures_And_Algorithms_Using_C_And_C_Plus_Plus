#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle // This should be a class instead of struct
{
public:
    int length;
    int breadth;

    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        int p;
        p = 2 * (length + breadth);
        return p;
    }
};

int main()
{
    // Rectangle r = {0, 0};
    // We cannot initialize it like this
    // For a structure we can directly initialize like this
    // But for rectangle we cannot initialize
    // So we have to remove it
    // Oh again an error
    Rectangle r;
    int l, b;

    printf("Enter length and breadth\n");
    cin >> l >> b;

    r.initialize(l, b); // initialize is private member

    int a = r.area(); // area is private member

    int peri = r.perimeter(); // perimeter is private member

    // Because we wrote a class here all these members are private
    // If we write struct here all the members are public
    // So in C++ structure and class are same
    // Only the difference is in a structure everything is public
    // But in class everything is private
    // So if we make it public then everything will be same as structure

    printf("Area = %d\nPerimeter = %d\n", a, peri);

    return 0;
}
// Here we have just changed a structure to a class
// So this progra is an object oriented programming
// We have converted a C program into a C++ program
// So when we are writing a C language code by writing functions and passing parameters as a sturcture
// Later on we can convert entire thing into a C++ code by converting it into a class
// Writing a class means C++ style programming
// Writing just a function means C style programming
// Unless we write a class we cannot say it is an object oriented programming
// So classes cannot be written always unless and until we have a big program