#include <stdio.h>
int main() {
    int n, i, even = 0, odd = 0, a[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("%d %d\n", even, odd);
    return 0;
}