#include <stdio.h>

int sum(int k);

int count;

int main()
{
    int k = 10;
    count = 0;
    printf("%d\n", sum(k));

    printf("%d recursive function calls\n", count);
    
    return 0;
}

int sum(int k) {
    count++;
    if (k < 0) k *= -1;
    if (k == 0) return 0;
    return k + sum(k - 1); // Recursive call to self
}