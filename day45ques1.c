#include <stdio.h>
int main() {
    char str[1000], ch;
    int i, count = 0;
    scanf("%s %c", str, &ch);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) count++;
    }
    printf("%d\n", count);
    return 0;
}