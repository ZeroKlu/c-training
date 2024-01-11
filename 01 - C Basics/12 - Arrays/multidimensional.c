#include <stdio.h>
#include <stdbool.h>

int main()
{
    // You can create multidimensional arrays
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

    printf("%d\n", matrix[0][1]);

    printf("%d\n", matrix[1][2]);
    matrix[1][2] = 9;
    printf("%d\n", matrix[1][2]);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
    }

    return 0;
}
