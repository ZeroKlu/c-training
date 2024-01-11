#include <stdio.h>

// You can define parameters to be passed to the function
void myFunction(char name[]) {
    printf("Hello %s\n", name);
}

void secondFunction(char name[], int age) {
    printf("%s is %d years old\n", name, age);
}

void arrayFunction(int nums[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%d: %d\n", i + 1, nums[i]);
    }
}

int main()
{
    char name[] = "Scott";
    int age = 53;
    int numbers[] = {1, 2, 3, 4, 5};

    // Then we call the function with an argument to pass to the parameter
    myFunction(name);

    // You can pass multiple arguments to the function
    secondFunction(name, age);

    // You can pass an array as an argument
    arrayFunction(numbers);

    return 0;
}
