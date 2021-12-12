#include <iostream>

using namespace std;

int *fun(int size)
// Function takes size as parameter
// It will create an array
// And return its pointer
//[] are not supported by all the compilers as it is the old syntax
// So use *
{
    int *p; // Taking a pointer
    // Create an array using malloc function
    // Or we can just create it by using new
    p = new int[size];

    for (int i = 0; i < size; i++) // Initializing array using for loop
        p[i] = i + 1;              // Initializing the all the elements of the array that is dynamically in the heap
    return p;                      // Returning the pointer
}

int main()
{
    // Inside the main function we are just having the pointer and size
    // We are calling a function and taking its result in pointer
    // Then using the pointer we are printing an array
    // Inside the main function there is no array
    // Then who is creating the array
    // Function fun is creating an array of given size
    // And also initializing all the elements starting from 1 onwards
    // And returning pointer of that type array which is taken in ptr
    // And main function is using this array
    // This is the benefit of dynamic memory
    // Array is created in heap and it is created in function fun
    // But even main function can access it because main function is getting its pointer
    // So if we create anything in heap then it can be accessed anywhere in the program if pointer is available on it
    int *ptr;   // Inside main function we will a pointer named ptr
    int sz = 5; // Taking a variable

    ptr = fun(sz); // Calling the function fun by passing sz that is size
    // So it should create an array of size 5 and return the address and take it in ptr

    for (int i = 0; i < sz; i++)
        cout << ptr[i] << endl;

    return 0;
}