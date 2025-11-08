#include <stdio.h>

int main() {
    int arr[100] = {1, 2, 4, 5, 6};
    int n = 5, element = 3, pos = 2, i;
    for(i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = element;
    n++;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}