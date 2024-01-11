#include <stdio.h>
// In C, bool is not a default data type, but you can add it, by importing this header
#include <stdbool.h>

int main()
{
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Note: boolean values are returned as integers (0 = false and 1 [or any non-zero] = true)
    printf("isProgrammingFun ? %d\n", isProgrammingFun);
    printf("isFishTasty ? %d\n", isFishTasty);

    int x = 10, y = 9;
    printf("%d > %d ? %d\n", x, y, x > y);

    bool isPizzaTasty = false;
    bool isHamburgerTasty = false;

    printf("isPizzaTasty == isHamburgerTasty ? %s\n", (isPizzaTasty == isHamburgerTasty) == 0 ? "false" : "true");

    return 0;
}
