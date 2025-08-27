#include <stdio.h>

int main() {
    int l, b;

    scanf("%d %d", &l, &b);

    int area = l * b;
    int perimeter = 2 * (l + b);

    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}
