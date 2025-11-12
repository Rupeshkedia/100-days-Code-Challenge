#include <stdio.h>
int main() {
    char str[1000], res[1000];
    int i, j = 0;
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
           str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
            res[j++] = str[i];
    }
    res[j] = '\0';
    printf("%s", res);
    return 0;
}