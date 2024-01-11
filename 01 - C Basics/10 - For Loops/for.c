#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Syntax:  for (initializer, condition, incrementer)
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i + 1);
    }

    // C does not have a for-each loop

    // You can nest loops
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d, %d\n", i + 1, j + 1);
        }
    }

    return 0;
}
