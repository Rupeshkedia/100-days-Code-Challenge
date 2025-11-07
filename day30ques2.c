#include <stdio.h>
int main() {
    int n, i, positive = 0, negative = 0, zero = 0, a[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        if(a[i] > 0)
            positive++;
        else if(a[i] < 0)
            negative++;
        else
            zero++;
    }
    printf("%d %d %d\n", positive, negative, zero);
    return 0;
}