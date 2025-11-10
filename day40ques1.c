#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);
    for(i = 0; i < r; i++)
        printf("%d ", matrix[i][i]);
    for(i = 1; i < r; i++)
        printf("%d ", matrix[i][r - i - 1]);
    return 0;
}