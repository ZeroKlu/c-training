#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 21;

    if (age < 18) {
        // block of code to be executed if condition 1 is true
        printf("Sorry, you're too young.\n");
    }
    else if (age > 65) {
        // block of code to be executed if all preceding conditions are false but this condition is true
        printf("Sorry, you're too old.\n");
    }
    else {
        // block of code to be executed if all conditions are false
        printf("You're the right age.\n");
    }

    // C includes the ternary conditional operator, which can be used two ways:

    // type var = condition ? val_if_true : val_if_false
    bool status = age >= 18 && age <=65 ? true : false;
    printf("%d\n", status);

    // condition ? expression_if_true : expression_if_false
    age >= 18 && age <=65 ? printf("right") : printf("wrong");

    return 0;
}
