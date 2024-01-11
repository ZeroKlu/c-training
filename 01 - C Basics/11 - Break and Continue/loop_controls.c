#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Sometimes, you cannot cone the condition to become false in a loop
    // In scenarios like this, use the break command to terminate the loop
    int i = 0;
    while (true) {
        printf("%d\n", ++i);
        if (i == 5) break;
    }

    // Other times, it's useful to skip an interation and start the next without ending the loop
    for (int j = 2; j < 11; j++) {
        // Skip the odd numbers
        if (j % 2 != 0) continue;
        printf("%d\n", j);
    }

    return 0;
}
