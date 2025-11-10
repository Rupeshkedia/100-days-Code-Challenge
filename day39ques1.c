#include <stdio.h>
#include <stdbool.h>

bool diagonalDistinct(int matrix[][10], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    int matrix[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    if (diagonalDistinct(matrix, n))
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");
    return 0;
}