#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[100], surname[100];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len-1] == '\n') str[len-1] = '\0';
    int i = 0, j = 0;
    while (str[i] == ' ') i++;
    for (; str[i] != '\0';) {
        while (str[i] != ' ' && str[i] != '\0') {
            surname[j++] = str[i++];
        }
        if (str[i] == '\0') break;
        surname[j] = '\0';
        while (str[i] == ' ') i++;
        break;
    }
    char *p = str;
    while (*p && *p == ' ') p++;
    while (*p && *p != ' ') {
        printf("%c. ", toupper(*p));
        while (*p && *p != ' ') p++;
        while (*p == ' ') p++;
    }
    printf("%s\n", surname);
    return 0;
}