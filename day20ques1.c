#include <stdio.h>
int main() {
    int n, product = 1, digit;
    scanf("%d", &n);
    while (n != 0) {
        digit = n % 10;
        if (digit % 2 == 1) {
            product *= digit;
        }
        n /= 10;
    }
    printf("%d\n", product);
    return 0;
}