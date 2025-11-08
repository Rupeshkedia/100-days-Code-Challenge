#include <stdio.h>

int main() {
    int arr[100] = {1, 3, 5, 7, 9};
    int n = 5, element = 6, i;
    for (i = n - 1; (i >= 0 && arr[i] > element); i--)
        arr[i + 1] = arr[i];
    arr[i + 1] = element;
    n++;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}