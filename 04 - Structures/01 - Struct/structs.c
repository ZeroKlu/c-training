#include <stdio.h>
#include <string.h>

// A struct groups multiple related variables together
struct Person {
    char first_name[30];
    char last_name[30];
    int age;
    // Note: Unlike classes (or even structs) in OOP languages,
    //       you cannot add methods to a struct in C
};

void details(struct Person person);

int main()
{
    // Create and instance of our declared structure
    struct Person me;

    // Populate struct members (using dot syntax)
    me.age = 53;
    strcpy(me.first_name, "Scott");
    strcpy(me.last_name, "McLean");
    details(me);

    // You can populate the values when you create the instance
    struct Person someone = {"Someone", "Else", 25};
    details(someone);
    
    return 0;
}

void details(struct Person person) {
    printf("%s %s is %d years old\n", person.first_name, person.last_name, person.age);
}