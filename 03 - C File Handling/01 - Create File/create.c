#include <stdio.h>

/*
    FILE is basically a data type, and we need to create a pointer variable to work with it
    To actually open a file, use the fopen() function, which takes two parameters:
    - filename: The file to open
    - mode: What actions to allow on the file
      - w: create/write
      - a: append
      - r: read
 */

int main()
{
    // Declare the file variable as a pointer
    FILE *fptr;

    // Use the fopen() function to access the file
    fptr = fopen("..\\data\\example.txt", "w");

    // Be sure to close the file before ending the program
    fclose(fptr);

    return 0;
}
