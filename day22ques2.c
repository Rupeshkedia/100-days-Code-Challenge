#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i == 1)
            sum += 1;
        else
            sum += (2 * i - 1.0) / (2 * i + 2);
    }
    printf("%lf\n", sum);
    return 0;
}