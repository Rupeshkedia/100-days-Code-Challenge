#include <stdio.h>

int main() {
    int n, i;
    int binary[32];
    scanf("%d", &n);
    for (i = 0; i < 32; i++) {
        binary[i] = 0;
    }
    i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    for (i = 31; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}