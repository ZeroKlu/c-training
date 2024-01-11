#include <stdio.h>

void write(char path[], char text[]);
void append(char path[], char text[]);

int main()
{
    char path[] = "..\\data\\example.txt";
    char toWrite[] = "Hello World!\n";
    char toAppend[] = "Here is my sample text.\n";

    write(path, toWrite);
    append(path, toAppend);

    return 0;
}

void write(char path[], char text[]) {
    FILE *fptr;
    // Opening a file to write is the same as to create
    fptr = fopen(path, "w");
    // The fprintf() function is just like printf(),
    // except that it writes to a file rather than the standard output
    fprintf(fptr, text);
    fclose(fptr);
}

void append(char path[], char text[]) {
    FILE *fptr;
    // If you want to keep the previous text and append, you must open in mode "a"
    fptr = fopen(path, "a");
    fprintf(fptr, text);
    fclose(fptr);
}