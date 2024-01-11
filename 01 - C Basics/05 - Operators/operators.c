#include <stdio.h>

int main()
{
    // ARITHMETIC OPERATORS
    int x = 5, y = 2, z = 1;

    // Addition (+)
    printf("%d + %d = %d\n", x, y, x + y);

    // Subtraction (-)
    printf("%d - %d = %d\n", x, y, x - y);

    // Multiplication (*)
    printf("%d * %d = %d\n", x, y, x * y);

    // Division (/)
    printf("%d / %d = %.1f\n", x, y, (float)x / y);

    // Modulus (%) - remainder
    printf("%d %% %d = %d\n", x, y, x % y); // Note %% to print a % sign instead of a placeholder

    // Increment (++)
    printf("++ = %d\n", ++z);

    // Decrement (--)
    printf("-- = %d\n", --z);

    // ASSIGNMENT OPERATORS

    // Assignment (=)
    z = 5;
    printf("z = %d\n", z);

    // Addition assignment (+=)
    z += 1; // same as:     z = z + 1
    printf("z += 1 -> %d\n", z);

    // Subtraction assignment (-=)
    z -= 1; // same as:     z = z - 1
    printf("z -= 1 -> %d\n", z);

    // Multiplication assignment (*=)
    z *= 2; // same as:     z = z * 2
    printf("z *= 2 -> %d\n", z);

    // Division assignment (/=)
    z /= 2; // same as:     z = z / 2
    printf("z /= 2 -> %d\n", z);

    // Modulus assignment (%=)
    z %= 3; // same as:     z = z % 2
    printf("z %%= 3 -> %d\n", z);

    // Bitwise AND assignment (&=)
    z &= 3;
    printf("z &= 3 -> %d\n", z);

    // Bitwise OR assignment (|=)
    z |= 3;
    printf("z |= 3 -> %d\n", z);

    // Bitwise XOR assignment (^=)
    z ^= 2;
    printf("z ^= 2 -> %d\n", z);

    // Left bitshift assignment (<<=)
    z <<= 1;
    printf("z << 1 = %d\n", z);

    // Right bitshift assignment (>>=)
    z >>= 1;
    printf("z >> 1 = %d\n", z);

    // COMPARISON OPERATORS

    // Equal To (==)
    printf("%d == %d ? %s\n", x, y, x == y ? "true" : "false");

    // Not Equal (!=)
    printf("%d != %d ? %s\n", x, y, x != y ? "true" : "false");

    // Greater Than (>)
    printf("%d > %d ? %s\n", x, y, x > y ? "true" : "false");

    // Less Than (<)
    printf("%d < %d ? %s\n", x, y, x < y ? "true" : "false");

    // Greater Than or Equal (>=)
    printf("%d >= %d ? %s\n", x, y, x >= y ? "true" : "false");

    // Less Than or Equal (<=)
    printf("%d <= %d ? %s\n", x, y, x <= y ? "true" : "false");

    // LOGICAL OPERATORS

    // Logical AND (&&)
    printf("%d > %d && %d > %d ? %s\n", x, y, y, z, x > y && y > z ? "true" : "false");

    // Logical OR (||)
    printf("%d > %d || %d > %d ? %s\n", x, y, y, z, x > y || y > z ? "true" : "false");

    // Logical NOT (!)
    printf("!(%d > %d) ? %s\n", x, y, !(x > y) ? "true" : "false");

    // MEMORY SIZE

    // C treats the sizeof() function as a size operator
    // Note the use of %lu (long unsigned int) in the placeholder
    printf("sizeof(%d) = %lu bytes\n", x, sizeof(x));

    return 0;
}
