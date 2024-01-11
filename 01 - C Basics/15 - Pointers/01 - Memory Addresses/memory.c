#include <stdio.h>

int main()
{
    // To access a variable's address in memory, use the reference operator (&)
    int myAge = 53;

    // Address is returned in hexadecimal format (note the %p placeholder for pointer)
    printf("myAge = %d: %p\n", myAge, &myAge);

    return 0;
}
