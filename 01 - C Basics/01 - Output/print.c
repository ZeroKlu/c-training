#include <stdio.h>

int main()
{
    // The printf() function prints to stdout (console/terminal)
    // \n adds a line-break (printf() does not add a line-break by default)
    printf("Hello World!\n\n");
    printf("I am learning C.\nAnd it is awesome!\n\n");
    // We also support \t and \"
    printf("\ttabbed\n");
    printf("\"quoted\"");
    return 0;
}

// Using a double-slash, you can add single-line comments

/*
 *  You can also add multi-line comments
 *  Originally, these were the only supported comments in C (until 1999)
 */
