#include <stdio.h>

float circleArea(float radius) {
    // A constant must be initialized when it is declared and cannot be changed afterward
    //   in C, the convention is to declare them with all-upper-case names
    const float PI = 3.14159;

    // This would result in an error:
    // PI = 3.14;

    return radius * radius * PI;
}

int main()
{
    int radius = 2;

    printf("The area of a circle with radius %d is %f\n", radius, circleArea(radius));

    return 0;
}
