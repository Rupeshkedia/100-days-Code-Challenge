#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++) {
        if (i == 0 && str[i] != ' ')
            printf("%c", toupper(str[i]));
        else if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            printf("%c", toupper(str[i+1]));
    }
    printf("\n");
    return 0;
}