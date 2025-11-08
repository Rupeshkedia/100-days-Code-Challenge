#include <stdio.h>

int main() {
    int freq[10] = {0};
    int num, digit, max_digit = 0, max_count = 0;
    scanf("%d", &num);
    if (num < 0) num = -num;
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_count) {
            max_count = freq[i];
            max_digit = i;
        }
    }
    printf("%d", max_digit);
    return 0;
}