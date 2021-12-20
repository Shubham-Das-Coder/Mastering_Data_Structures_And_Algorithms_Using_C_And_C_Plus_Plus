#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;

    printf("Elements are \n");

    for (i = 0; i < arr.length; i++)
    {
        printf("%d  ", arr.A[i]);
    }
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array *arr, int index, int x)
// The function Insert returns void and it should take a parameter of type Array by address because it is going to modify an array
// The next thing is index at which we want to insert an element
// And at last is the value which we want to insert
{
    // Before insertion let us check whether the index guve is valid or not
    // A valid index is from zero to length of an array
    // So here we will check if index is given is greater than or equal to zero or not
    // And also index should be less than or equal to arr's length
    // For performing insert operation we need a for loop
    // And for that we will declare a variable i
    int i;
    if (index >= 0 && index <= arr->length)
    {
        // If the index is valid then only we will perform insert operation
        // Here using the for loop we will shift the elements
        // And provide a free space for a new element
        // Then we will insert it
        for (i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
            // As A is inside an array object so we have to use arrow operator for accessing it
            // So the previous element will be copied here at the curreent place
        }
        arr->A[index] = x;
        arr->length++; // Length should be incremented as new element is inserted
    }
}

int main()
{
    struct Array arr = {{1, 3, 5, 7, 9}, 10, 5};

    Insert(&arr, 5, 10); // For inserting we have to pass array as a parameter that is by address
    // And the index which we want to insert is at index 5
    // And the value that we want to insert is 10

    Display(arr); // All the elements will be displayed

    return 0;
}