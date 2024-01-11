#include <stdio.h>
#include <string.h>

struct Person {
    char first_name[30];
    char last_name[30];
    int age;
    // We can simulate a method using a function pointer
    void (*describe)(struct Person *person);
};

void details(struct Person *person);

int main()
{
    struct Person me = {"Scott", "McLean", 53};
    // Assign the function to the pointer
    me.describe = details;
    // Call the function
    me.describe(&me);

    return 0;
}

void details(struct Person *person) {
    printf("%s %s is %d years old\n", person->first_name, person->last_name, person->age);
}
