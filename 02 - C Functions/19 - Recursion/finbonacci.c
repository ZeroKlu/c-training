#include <stdio.h>
#include <math.h>
#include <sys/time.h>

long unsigned count;

// Complexity: O(n^2)
int fibonacci_recursive(int n) {
    count++;
    if (n < 0) n *= -1;
    if (n < 2) return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Complexity: O(n)
int fibonacci_array(int n) {
    count++;
    if (n < 0) n *= -1;
    if (n < 2) return n;
    int f[n + 2];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

// Complexity: O(n)
int fibonacci_iterative(int n) {
    count++;
    if (n < 0) n *= -1;
    if (n < 2) return n;
    int a = 0, b = 1, c, i;    
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Complexity: O(log n)
int fibonacci_formula(int n) {
    count++;
    if (n < 0) n *= -1;
    if (n < 2) return n;
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5));
}

void print_time(struct timeval start, struct timeval end) {
    long s = end.tv_sec - start.tv_sec;
    long m = (s * 1000000 + end.tv_usec) - start.tv_usec;
    printf("Elapsed Time: %dµs\n", m);
}

int main()
{
    struct timeval start, end;
    double duration;
    int n = 45;
    long s, m;

    count = 0;
    gettimeofday(&start, NULL);
    printf("Recursive: F(%d) = %d\n", n, fibonacci_recursive(n));
    gettimeofday(&end, NULL);
    print_time(start, end);
    printf("Function Calls: %lu\n\n", count);

    count = 0;
    gettimeofday(&start, NULL);
    printf("Array: F(%d) = %d\n", n, fibonacci_array(n));
    gettimeofday(&end, NULL);
    print_time(start, end);
    printf("Function Calls: %lu\n\n", count);

    count = 0;
    gettimeofday(&start, NULL);
    printf("Iterative: F(%d) = %d\n", n, fibonacci_iterative(n));
    gettimeofday(&end, NULL);
    print_time(start, end);
    printf("Function Calls: %lu\n\n", count);

    count = 0;
    gettimeofday(&start, NULL);
    printf("Formula: F(%d) = %d\n", n, fibonacci_formula(n));
    gettimeofday(&end, NULL);
    print_time(start, end);
    printf("Function Calls: %lu\n", count);
    
    return 0;
}
