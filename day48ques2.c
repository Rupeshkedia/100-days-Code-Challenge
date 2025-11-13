#include <stdio.h>
#include <string.h>
void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';
    char *word_start = str;
    char *ptr = str;
    while (*ptr) {
        if (*ptr == ' ') {
            reverse(word_start, ptr - 1);
            word_start = ptr + 1;
        }
        ptr++;
    }
    reverse(word_start, ptr - 1);
    printf("%s\n", str);
    return 0;
}