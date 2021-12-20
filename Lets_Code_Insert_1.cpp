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

void Append(struct Array *arr, int x) // Writing a function to append a new element
// It will take a struture array
// As it is going to modify the array it should be a call by address type
// And x is the value which we want to insert
// Append means just we will be inserting a new element at the end of this array
// Right now the elements are 1,3,5,7,9
// So new element should come after 9
// So before insertion we should check whether there is sufficient space or not
{
    if (arr->length < arr->size)
    // If true then free space is available
    // Otherwise we cannot insert the element
    {
        arr->A[arr->length++] = x; // The value of x is stored
    }
}

int main()
{
    struct Array arr = {{1, 3, 5, 7, 9}, 10, 5};

    Append(&arr, 11);
    // Calling Append function inside main function by passing address of arr
    // And the value we want to insert is 20

    Display(arr); // After inserting the value this Display function will display the value

    return 0;
}