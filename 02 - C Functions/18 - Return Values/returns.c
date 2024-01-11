#include <stdio.h>

// To return a value, define the function with a non-void return type
int square(int n) {
    // And then return a value of that type
    return n * n;
}

int add(int x, int y) {
    return x + y;
}

int main()
{
    int n = 4;

    // You can assign the return value to a variable
    int n_squared = square(n);
    printf("%d^2 = %d\n", n, n_squared);

    // Or you can just use the return without storing it:
    n++;
    printf("%d^2 = %d\n", n, square(n));

    int x = 10, y = 5;
    printf("%d + %d = %d\n", x, y, add(x, y));

    return 0;
}
