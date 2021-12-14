#include <iostream>

using namespace std;

class Rectangle
{
private: // These members are declared as private
    // By default also they are private
    int length;
    int breadth;

public:
    // Every C++ class should have a constructor
    // It is not mandatory
    // But it is a good style of programming to define constructors
    Rectangle() // Default constructor
    // So first constructor is a non parameterized constructor and is also called as default constructor
    // If you are creating an object of a recatngle without passing any arguments then it will make length and breadth as zero
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b) // Parameterized constructor
    // Writing another constructor which will take length and breadth as parameter and will set given length and given breadth
    {
        length = l;
        breadth = b;
    }
    int area() // Actual method which we wanted
    {
        return breadth * length;
    }
    int perimeter() // Actual method which we wanted
    {
        return 2 * (length + breadth);
    }
    void setLength(int l) // Mutated function
    {
        length = l;
    }
    void setBreadth(int b) // Mutated function
    {
        breadth = b;
    }
    int getLength() // Accessor function which is used for reading the property length
    {
        return length;
    }
    int getBreadth() // Accessor function which is used for reading the property breadth
    {
        return breadth;
    }
    // Rest of the things are extra
    // In C++ we write extra code
    // The code which we are not even using are written so that when we write the class for something it should be a complete class
    // If we think that why to write so much for returning length and breadth
    // Then it is better not to use C++

    ~Rectangle() // Lastly a class should have a destructor
    {
        // And here we dont have to destroy anything
        // If there is dynamic allocation then we can deallocate it
        // But we dont have anything to do
        cout << "Destructor" << endl; // Just diplaying a message
    }
};

int main()
{
    Rectangle r(10, 5); // Creating rectangle object and directly passing the values

    cout << "Area : " << r.area() << endl;
    cout << "Perimeter : " << r.perimeter() << endl;

    return 0;
}
// Here destructor is also displayed
// Because once the main function ends the object is automatically destroyed
// This destructor function is called