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

int Delete(struct Array *arr, int index)
{
    int x = 0;
    int i;

    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int LinearSearch(struct Array arr, int key)
// Function name is LinearSearch
// It should take an array
// We are not passing it by address because just by value it is enough
// Because it has to only search for the value
// Then the key value which we want to search
{
    int i;
    for (i = 0; i < arr.length; i++) // We are using dot length because it is call by value and not call by reference
    {
        if (key == arr.A[i]) // If given key is equal to element in an array at index i
        {
            return i; // If found then returning the index at which it is found
        }
    }
    return -1; // Returning -1 if the element is not found
}

int main()
{
    struct Array arr = {{1, 3, 5, 7, 9}, 10, 5};

    printf("%d\n", LinearSearch(arr, 4)); // Searching for 4 in the array

    Display(arr);

    return 0;
}