#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[20]; // Instead of taking a pointer and creating an array in heap we will change it to an array of size 20
    int size;
    int length;
    // This structure will be initialized with values that we have given
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

int main()
{
    struct Array arr = {{1, 3, 5, 7, 9}, 20, 5}; // When creating an array, at that time only we will initialize it insinde the object
    // 1,3,5,7,9 are the elements
    // 20 is the size of the array which has already been initialized
    // 5 is the number of elements in the array or length of the array
    // The first part is stored in an array
    // So directly we have taken a fixed size array so directly we have fixed the values in the declaration and initialization part
    // So here we dont have to take all the elements
    // Directly we will call the function
    // We dont need the variables n and i

    Display(arr);

    return 0;
}