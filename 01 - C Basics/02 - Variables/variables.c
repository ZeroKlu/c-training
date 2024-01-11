#include <stdio.h>

/*
    The general rules for naming variables are:
    - Names can contain letters, digits and underscores
    - Names must begin with a letter or an underscore (_)
    - Names are case sensitive (myVar and myvar are different variables)
    - Names cannot contain whitespaces or special characters like !, #, %, etc.
    - Reserved words (such as int) cannot be used as names
 */

int main()
{
    // Syntax:  type variableName = value;
    int myNum = 15;

    // You can assign a value later after the type declaration
    char myChar;
    myChar = 'A';
    // Or change them later
    myChar = 'a';

    // You can print a variable just like you could a literal
    char msg[] = "Hello world!";
    printf(msg);

    // Printing supports type formatters for interpolation
    printf("\nfifteen = %d\n", myNum);  // %c for char and %f for float

    // This allow printing multiple types in a single statement
    printf("My variables are %d and %c\n", myNum, myChar);

    // Multiple variables can be assigned in a single statement
    int x = 10, y = 20, z = 30;
    printf("%d + %d + %d = %d\n", x, y, z, x + y + z);
    x = y = z = 5;
    printf("%d + %d + %d = %d\n", x, y, z, x + y + z);

    return 0;
}
