#include <stdio.h>
#include <string.h>
int main() {
    char bin[100];
    scanf("%s", bin);
    for (int i = 0; i < strlen(bin); i++) {
        if (bin[i] == '0') bin[i] = '1';
        else if (bin[i] == '1') bin[i] = '0';
    }
    printf("%s\n", bin);
    return 0;
}