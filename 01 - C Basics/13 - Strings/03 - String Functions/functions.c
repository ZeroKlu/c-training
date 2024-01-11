#include <stdio.h>
// Include this header file to access the string functions
#include <string.h>
#include <stdbool.h>

int main()
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // Unlike other data types, the string header provides a length function
    printf("%d\n", strlen(alphabet));
    // You might think that's unnecessary, since a character is 1 byte, and sizeof(arr) / 1 = length
    // But, sizeof includes the null character at the end of the string, so...
    printf("%d\n", sizeof(alphabet));

    // Worse yet, if you don't populate all of your array, the difference can be even more:
    char letters[10] = "ABC";
    printf("%d\n", strlen(letters));
    printf("%d\n", sizeof(letters));

    // You can concatenate two strings
    char name[12] = "Scott";
    char last[] = " McLean";
    // Result is stored in the first string argument, so it must be declared with sufficient length
    strcat(name, last);
    printf("%s\n", name);

    // You can copy a string
    char copied[12];
    // Result is stored in the first string argument, so it must be declared with sufficient length
    strcpy(copied, name);
    printf("%s\n", copied);

    // You can compare two strings - strcmp() returns 0 if the strings are the same
    int match = strcmp(name, copied);
    if (match == 0) {
        printf("Same!\n");
    }

    // strcmp() returns a non-zero integer if the strings are different
    match = strcmp(name, last);
    printf("%d\n", match);

    return 0;
}
