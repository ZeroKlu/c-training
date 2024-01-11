#include <stdio.h>
#include <stdbool.h>

int main()
{
    int day = 6;

    // When you're only comparing values of a single expression,
    // a switch statement is much cleaner than many if/else statements
    switch (day) {
        // Each case represents a single value to compare
        case 1:
            // Code block if value is matched
            printf("Monday");
            // Keeps the code from falling through to the next case
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        default:
            // Code block if no value is matched
            printf("Weekend!");
            break;
    }

    return 0;
}
