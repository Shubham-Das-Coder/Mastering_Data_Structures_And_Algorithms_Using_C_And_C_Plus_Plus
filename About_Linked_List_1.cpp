#include <stdio.h>

// What is the size of the structure
// Integer takes 2 bytes
// What about pointer?
// In any compiler if integer is taking 2 bytes then pointer will also take 2 bytes
// If integer is taking 4 bytes then pointer will also take 4 bytes
// Here we are assuming that integer takes 2 bytes
// So total is 4 bytes
// So size of a node is 4 bytes
struct Node
{
    int data;
    struct Node *next;
};
// It is having a pointer of its own type
// Such a structure is called a self referential structure
// Self referential structures are used in linked lists

// For C language we use structure
// For C++ also we use structure
// C++ also supports structure
// What is a structure in C++?
// It is same as a class
// Then what is the difference between class and structure?
// In class everything by default is private
// But in structure everything by default is public
// So if we are doing C++ program then there also we can define a node with the help of structure only
// Or else we can use a class also

// Now let us see how to create such nodes
// How these nodes are created and linked there
// So cresting and linking we will see afterwards
// First let us see a basic thing how a node is created
// For creating a node we need a pointer
// Because nodes have to be created inside heap
// So for that we must have a pointer
struct Node *p; // We are calling the structure name as p
// So when we declare any pointer variable the memory will be allocated inside stack
// Now we have to create node in heap
// So for that function in C language is malloc function
p = (struct Node *)malloc(sizeof(struct Node)); // C language
// This malloc function returns void type of pointer
// So we have to typecast it
// C alnguage has a lengthy code
// But it is short for C++
p = new Node; // When we say new it is created in heap
// A node structure is created and it is defined by data and next pointer

// The structure members are accessed using arrow operator
p->data = 10; // Storing the value 10
p->next = 0;  // Zero means NULL so NULL is stored here

int main()
{
}