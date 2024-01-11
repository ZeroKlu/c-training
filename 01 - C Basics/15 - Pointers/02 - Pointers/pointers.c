#include <stdio.h>

int main()
{
    int myAge = 53;
    // Pointer variable holds the memory address (indicated by *)
    int *ptr = &myAge;
    // Note: The * can either follow the type or precede the name,
    //       so these two declarations are identical:
    //  int *ptr = &myAge;
    //  int* ptr = &myAge;

    printf("%d\n", myAge);  // Stored regular variable
    printf("%p\n", &myAge); // Access the memory address
    printf("%p\n", ptr);    // Stored memory address in pointer
    printf("%pdn", *ptr);   // Access value by dereferencing pointer

    return 0;
}
