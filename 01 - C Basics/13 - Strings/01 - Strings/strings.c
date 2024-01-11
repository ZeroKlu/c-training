#include <stdio.h>
// Including this header to access the strlen() function
#include <string.h>

int main()
{
    // In C, a string is not a data type; it is just a character array
    char greetings[] = "Hello World.";
    printf("%s\n", greetings);

    // You can access the characters by index
    printf("%c\n", greetings[11]);

    // You cannot replace the entire value with another string,
    // but you can modify the individual characters
    greetings[11] = '!';
    printf("%s\n", greetings);

    // You could explicitly declare the character array
    // Note the null character '\0' required at the end (omitting this will lead to weirdness - try it...)
    char parting[] = {'G', 'o', 'o', 'd', 'b', 'y', 'e', '\0'};

    // It's just an array, so you can loop
    for (int i = 0; i < strlen(parting); i++) {
        printf("%c", parting[i]);
    }
    printf("\n");

    return 0;
}
