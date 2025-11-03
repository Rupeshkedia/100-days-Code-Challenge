#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    double sum = 0;
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        digits++;
        n /= 10;
    }
    n = original;
    while (n != 0) {
        remainder = n % 10;
        sum += pow(remainder, digits);
        n /= 10;
    }
    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}