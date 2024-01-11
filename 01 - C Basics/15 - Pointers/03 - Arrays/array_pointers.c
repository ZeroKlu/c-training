#include <stdio.h>

int main()
{
    int myNumbers[4] = {25, 50, 75, 100};
    for (int i = 0; i < 4; i++) {
        printf("%d %p\n", myNumbers[i], &myNumbers[i]);
    }

    // Because an array name is a pointer to element 0, these are identical
    printf("%d\n", *myNumbers);
    printf("%d\n", myNumbers[0]);

    // Because of that, we can actually access pointers arithmetically
    printf("%d\n", *(myNumbers + 1));
    printf("%d\n", myNumbers[1]);

    // Even for updates
    *myNumbers = 10;
    *(myNumbers + 1) = 20;

    // Note that we don't need the & symbol, because the array name is already a pointer
    int *ptr = myNumbers;
    for (int j = 0; j < 4; j++) {
        printf("%d\n", *(ptr + j));
    }

    return 0;
}
