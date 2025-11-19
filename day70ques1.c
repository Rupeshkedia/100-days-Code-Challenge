#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i=0;
    fgets(str,200,stdin);
    if(str[0]>='a' && str[0]<='z') str[0]=str[0]-32;
    for(i=1;str[i]!='\0';i++) {
        if(str[i-1]==' ' && str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        else if(str[i-1]!=' ' && str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("%s",str);
    return 0;
}