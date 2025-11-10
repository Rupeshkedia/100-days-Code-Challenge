#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    scanf("%d %d", &r1, &c1);
    int m1[r1][c1];
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &m1[i][j]);
    scanf("%d %d", &r2, &c2);
    int m2[r2][c2];
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &m2[i][j]);
    if(c1 != r2) return 0;
    int result[r1][c2];
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(k = 0; k < c1; k++)
                result[i][j] += m1[i][k] * m2[k][j];
        }
    }
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}