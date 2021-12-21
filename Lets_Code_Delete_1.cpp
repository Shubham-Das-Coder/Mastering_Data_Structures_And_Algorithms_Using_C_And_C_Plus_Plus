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
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

// Delete function will delete an element from an array from a given index
// It should delete an element and its name is Delete
// We should take a parameter of type array and it should be called by address
// Because we have to modify an array
// The next thing is we should take an index
int Delete(struct Array *arr, int index)
{
    int x = 0; ////For deletion we should take a deleted value
    int i;     // For shifting rest of the elements

    if (index >= 0 && index < arr->length) // Cheking whether the index is valid or not
    {
        x = arr->A[index];                        // Getting the value from array at a given index
        for (i = index; i < arr->length - 1; i++) // Writing a for loop for shifting of the elements
        {
            arr->A[i] = arr->A[i + 1]; // Shifting the elements towards left
        }
        arr->length--; // The length of the array must be decremented
        return x;      // The function returns x
    }
    return 0; // If the element is not found then it will return zero
}

int main()
{
    struct Array arr = {{1, 3, 5, 7, 9}, 10, 5};

    printf("%d\n", Delete(&arr, 4));
    // Calling delete function by passing address of array and index 4

    Display(arr);

    return 0;
}