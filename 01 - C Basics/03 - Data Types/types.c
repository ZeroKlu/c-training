#include <stdio.h>

// Ask me if you want to understand why this is the min for int32
#define __INT32_MIN__ 0x80000000;

int main()
{
    // int is 2 or 4 bytes
    int iMin = __INT32_MIN__;
    int iMax = __INT32_MAX__;
    printf("int: %d to %d\n", iMin, iMax);
    printf("int: %i to %i\n", iMin, iMax);

    // float is 4 bytes
    float pi = 3.14159;
    printf("float example: %f\n", pi);
    // You can limit how many decimal places you show (applies 5/4 rounding)
    printf("float example: %.2f\n", pi);

    // double is 8 bytes
    double phi = 1.61803;
    printf("double example: %lf\n", phi);

    // char is 1 byte
    char c = 'A';
    printf("char example: %c\n", c);

    // string is 1 byte per character (since it's a character array)
    char word[] = "hello";
    printf("string example: %s\n", word);

    return 0;
}
