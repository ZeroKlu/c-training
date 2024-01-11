#include <stdio.h>

int main()
{
    // Create an integer variable that will store the number we get from the user
    int myNum;

    // Ask the user to type a number
    printf("Type a number: ");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number squared is: %d\n", myNum * myNum);
    fflush(stdin);

    char myChar;

    // Ask the user to type a number AND a character
    printf("Type a number AND a character and press enter: ");

    // Get and save the number AND character the user types
    scanf("%d %c", &myNum, &myChar);

    // Print the number
    printf("Your number is: %d\n", myNum);

    // Print the character
    printf("Your character is: %c\n", myChar);
    fflush(stdin);

    char firstName[30];

    // Ask the user to input some text
    printf("Enter your first name: ");

    // Get and save the text - Note, a space is a terminating character,
    // so this will not capture a string with spaces
    scanf("%s", firstName);

    // Output the text
    printf("Hello %s\n", firstName);
    fflush(stdin);

    char fullName[30];

    printf("Type your full name: ");
    // fgets will capture the entire line (including spaces)
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s\n", fullName);
    fflush(stdin);

    return 0;
}
