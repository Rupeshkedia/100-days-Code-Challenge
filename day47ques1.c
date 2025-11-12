#include <stdio.h>
#include <string.h>
int main() {
    char str1[1000], str2[1000];
    int freq[26] = {0}, i;
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    int len1 = strlen(str1) - 1, len2 = strlen(str2) - 1;
    if(len1 != len2) {
        printf("No\n");
        return 0;
    }
    for(i = 0; i < len1; i++) freq[str1[i] - 'a']++;
    for(i = 0; i < len2; i++) freq[str2[i] - 'a']--;
    for(i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}