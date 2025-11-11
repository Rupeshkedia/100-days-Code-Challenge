#include <stdio.h>

int main() {
    char str[100];
    int i=0, j;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n') i++;
    i--;
    j = 0;
    while (j < i) {
        if (str[j] != str[i]) {
            printf("Not Palindrome\n");
            return 0;
        }
        j++;
        i--;
    }
    printf("Palindrome\n");
    return 0;
}