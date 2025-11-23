#include <stdio.h>
#include <string.h>

enum light {RED, YELLOW, GREEN};

int main() {
    enum light t;
    char s[20];
    scanf("%s", s);
    if (strcmp(s, "RED") == 0) t = RED;
    else if (strcmp(s, "YELLOW") == 0) t = YELLOW;
    else t = GREEN;

    if (t == RED) printf("Stop");
    else if (t == YELLOW) printf("Wait");
    else printf("Go");
    return 0;
}