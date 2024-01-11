#include <stdio.h>

int main()
{
    // Including special characters in a string requires the use of escape sequences

    char dblQuotes[] = "\"double-quotes\"\n";
    printf("%s", dblQuotes);
    
    char sglQuotes[] = "\'single-quotes\'\n";
    printf("%s", sglQuotes);

    char path[] = "C:\\Temp\\\n";
    printf("%s", path);

    char newLine[] = "Line 1\nLine 2\n";
    printf("%s", newLine);

    char tab[] = "\tTabbed\n";
    printf("%s", tab);

    // And we've already discusses \0 - the null terminating character

    return 0;
}
