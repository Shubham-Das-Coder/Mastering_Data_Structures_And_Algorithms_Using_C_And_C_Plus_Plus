#include <stdio.h>
#include <stdlib.h>

struct Array // Defining structure for array
{
    int *A;     // Taking an integer type pointer so this will be an integer array
    int size;
    int length; // Number of elements in the array
    // So these are the three members of the Array structure
};

// Here we will write down a function for displaying all the elements in the array
void Display(struct Array arr) // We should take a structure array and let us call parameter name arr
{
    // We should simply display all the elements
    // And for that we need a variable i for using for loop
    int i;

    printf("Elements are \n");

    // Then using for loop we will display all the elements here
    for (i = 0; i < arr.length; i++)
    {
        printf("%d  ", arr.A[i]);
    }
}

int main()
{
    struct Array arr; // Creating a variable of type array and also initialize it
    // So first of all Array arr is the array name

    // Then for creating an array we should know what is the size of the array
    // So let us take it as an input from the user

    printf("Enter size of the array\n"); // Displaying message

    scanf("%d", &arr.size); // Reading input and reading the size of the array
    // We will beknowing the size of the array with this

    // Once we know the size we should create an array for this pointer of integer type
    // It can point on an array
    // So we create an array  in heap and we will make this A point on that one
    // Here we are able to create an array of the required size
    // So we have taken the size
    // Now we will create an array of same size and we will make A point on that one

    arr.A = (int *)malloc(arr.size * sizeof(int)); // This A is inside arr
    // Now because the malloc function is present in stdlib.h we should include that header file

    // Now the following things are initialized
    // We know the size of the array
    // And we have created an array inside heap and making pointer A point on that one
    // Then also we should set the length to zero as there are no elements right now
    // So this is what we need in initialization
    // So this array will be created in heap
    // So this type of array structure is more preferable
    // Because the size is dynamic whatever the required size is we can take the size
    // If we want to fill the elements then we can take the elements from the keyboard or anywhere else we can bring the elements and fill them in this array
    // Let us fill few elements in the array and then we will write a function for displaying the array
    // So for taking numbers we should know how many numbers are going to be inserted
    // So that we can take it from the keyboard
    // So we are taking variable n
    // And also for for loop variable i is being taken

    int n, i;

    // Here we will give a message
    printf("Enter how many number of numbers\n");

    // Then using scanf we will take the number of numbers in variable n
    scanf("%d", &n);

    // Using for loop we will take all the values from the keyboard
    // And we will store them in an array

    // Before for loop it is better to display a message to enter all the numbers
    printf("Enter all the elements\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]); // Reading the elemnets in the array
    }
    // This for loop will read all the elements from the keyboard
    // And store them in an array from starting location to n

    // After inserting all the elements we should set the length of an array as n
    arr.length = n;

    // Here inside main function we will call Display function and passing arr
    Display(arr);

    return 0;
}