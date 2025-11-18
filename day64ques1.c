#include <stdio.h>
#include <string.h>

int main() {
    char s[100000];
    scanf("%s", s);
    int n = strlen(s);
    int lastIndex[256];
    memset(lastIndex, -1, sizeof(lastIndex));
    int maxLength = 0;
    int start = 0;
    
    for (int end = 0; end < n; end++) {
        if (lastIndex[s[end]] >= start) {
            start = lastIndex[s[end]] + 1;
        }
        lastIndex[s[end]] = end;
        int currentLength = end - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    
    printf("%d", maxLength);
    return 0;
}