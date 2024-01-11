#include <stdio.h>
// Functions defined here
#include <math.h>

int main()
{
    int i = 4;
    float f = 1.6f;

    // Square Root:     sqrt()
    printf("Square root of %d is %d\n", i, sqrt(i));

    // 5/4 rounding:    round()
    printf("%.1f rounds to %d\n", f, (int)round(f));

    // Ceiling round: ceil()
    printf("%.1f ceiling is %d\n", f, (int)ceil(f));

    // Floor round: floor()
    printf("%.1f floor is %d\n", f, (int)floor(f));

    int x = 2, y = 3;

    // x to the y power:    pow()
    printf("%d^%d = %d\n", x, y, (int)pow(x, y));
    
    return 0;
}

/*
    Some Popular Math Functions

    Function	Description
    abs(x)	    Returns the absolute value of x
    acos(x)	    Returns the arccosine of x
    asin(x)	    Returns the arcsine of x
    atan(x)	    Returns the arctangent of x
    cbrt(x)	    Returns the cube root of x
    cos(x)	    Returns the cosine of x
    exp(x)	    Returns the value of E^x
    sin(x)	    Returns the sine of x (x is in radians)
    tan(x)	    Returns the tangent of an angle
 */