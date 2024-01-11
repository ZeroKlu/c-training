#include <stdio.h>

int main()
{
    // One example why you might need to change data type would be integer division
    int x = 5, y = 2;
    // Because x and y are integers, the result is an integer (2 instead of 2.5)
    printf("%d / %d = %d\n", x, y, x / y);
    // We can fix this by converting (in this case, casting) to float
    printf("%d / %d = %.1f\n", x, y, (float)x / y);
    // Note: without casting, simply stashing the integer division in a float still breaks
    float s = x / y;
    printf("%d / %d = %f\n", x, y, s);

    // IMPLICIT CONVERSION
    // Implicit conversions take place automatically when assigning a variable to one of another type
    float f = x;
    printf("%f\n", f);

    // Converting to integer is a floor function, not rounding
    y = 9.99;
    printf("%d\n", y);

    // EXPLICIT CONVERSION
    // Explicit conversions are performed manually by the programmer
    // Syntax:  (type) var or literal
    float sum = (float)x / y;
    printf("%d / %d = %f\n", x, y, sum);

    return 0;
}
