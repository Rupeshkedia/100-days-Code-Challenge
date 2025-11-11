#include <stdio.h>

int main() {
    char str[100], temp;
    int i = 0, j;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n') i++;
    i--;
    j = 0;
    while (j < i) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
    printf("%s", str);
    return 0;
}