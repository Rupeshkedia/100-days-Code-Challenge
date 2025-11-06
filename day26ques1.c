#include <stdio.h>
int main() {
    int i, j, k;
    for(i = 1; i <= 5; i++) {
        for(j = 5; j > i; j--)
            printf(" ");
        for(k = 6 - i; k <= 5; k++)
            printf("%d", k);
        printf("\n");
    }
    return 0;
}