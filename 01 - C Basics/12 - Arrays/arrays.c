#include <stdio.h>
#include <stdbool.h>

int main()
{
    // An array contains multiple items of the same data type
    int myNumbers[] = {25, 50, 0, 100};

    // These can be accessed by (zero-based) index
    printf("%d\n", myNumbers[1]);

    // Values in the array can be changed
    myNumbers[2] = 75;
    printf("%d\n", myNumbers[2]);

    // There is no length function for C arrays, but you can calculate the length
    // ... by dividing the memory size of the array by the memory size of one element of the data type
    int len = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("Size by division: %d\n", len);
    // ... or, getting a little trickier, by using pointer math
    len = *(&myNumbers + 1) - myNumbers;
    printf("Size by pointer math: %d\n", len);

    // You can loop across the items in the array
    for (int i = 0; i < len; i++) {
        printf("%d\n", myNumbers[i]);
    }

    // You can declare an array's size initially and then populate the array afterwards
    char myLetters[3];
    myLetters[0] = 'A';
    myLetters[1] = 'B';
    myLetters[2] = 'C';
    // Since a string is just a character array in C, I can print the entire array here
    printf(myLetters);

    return 0;
}
