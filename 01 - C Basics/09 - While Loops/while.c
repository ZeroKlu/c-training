#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i = 0;

    // Execute the code block as long as the condition is true
    // Does not execute if the condition is initially false
    while (i < 5) {
        printf("%d\n", ++i);
    }

    i = 0;

    // Execute the code block until the condition becomes false
    // Executes at least once, even if the condition is initially false
    do {
        printf("%d\n", ++i);
    } while (i < 5);

    return 0;
}
