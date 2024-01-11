#include <stdio.h>

// If the function is not implemented above where it is called, then is must be separately declared
void myFunction();

// When implemented before the call, a separate declaration is not necessary
void userFunction() {
    printf("My other user-defined function ran!\n");
}

// main() is a predefined function that defines the executable
int main()
{
    // printf() is also a predefined function
    printf("Hello, world!\n");

    // Call a user-defined function
    myFunction();

    // Call the other user-defined function
    userFunction();
    
    return 0;
}

// Here, I am implementing the previously declared user-defined function
void myFunction() {
    printf("My user-defined function ran!\n");
}