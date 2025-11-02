#include <stdio.h>
int main() {
    int n, sum = 0, i = 1, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    while (count < n) {
        sum += i;
        i += 2;
        count++;
    }
    printf("%d\n", sum);
    return 0;
}