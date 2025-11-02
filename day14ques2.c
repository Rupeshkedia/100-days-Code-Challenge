#include <stdio.h>
int main() {
    int n, i = 2;
    unsigned long long product = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    while (i <= n) {
        product *= i;
        i += 2;
    }
    printf("%llu\n", product);
    return 0;
}