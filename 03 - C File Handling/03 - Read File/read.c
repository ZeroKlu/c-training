#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("..\\data\\example.txt", "r");

    // If the file is missing, fopen() in mode "r" returns NULL
    if (fptr == NULL) {
        printf("Error: Could not open file 'example.txt'\n");
        return -1;
    }

    char content[100];

    // Loop through lines using fgets() to store each to our string variable
    while (fgets(content, 100, fptr)) {
        printf("%s", content);
    }

    fclose(fptr);

    return 0;
}
