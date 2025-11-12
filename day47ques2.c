#include <stdio.h>
#include <string.h>
int main() {
    char str[1000], word[100], longest[100];
    int i=0, j=0, max_len=0;
    fgets(str, sizeof(str), stdin);
    while(1) {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            if(j > max_len) {
                max_len = j;
                word[j] = '\0';
                strcpy(longest, word);
            }
            j = 0;
            if(str[i] == '\n' || str[i] == '\0') break;
        }
        i++;
    }
    printf("%s\n", longest);
    return 0;
}