#include <stdio.h>
#include <math.h>
int main() {
    int n, first, last, digits, swap_n, power;
    scanf("%d", &n);
    last = n % 10;
    digits = (int)log10(n);
    first = n / (int)pow(10, digits);
    swap_n = n - first * (int)pow(10, digits) - last + last * (int)pow(10, digits) + first;
    printf("%d\n", swap_n);
    return 0;
}