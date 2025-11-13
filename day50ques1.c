#include <stdio.h>
#include <string.h>

int main(){
    char s[32];
    if(!fgets(s,sizeof s,stdin)) return 0;
    s[strcspn(s,"\n")] = '\0';
    char day[4], mon[4], year[8];
    if(sscanf(s,"%3[^/]/%2[^/]/%4s",day,mon,year) != 3){
        printf("Invalid format\n");
        return 0;
    }
    const char *mname = "??";
    if(strcmp(mon,"01")==0) mname="Jan";
    else if(strcmp(mon,"02")==0) mname="Feb";
    else if(strcmp(mon,"03")==0) mname="Mar";
    else if(strcmp(mon,"04")==0) mname="Apr";
    else if(strcmp(mon,"05")==0) mname="May";
    else if(strcmp(mon,"06")==0) mname="Jun";
    else if(strcmp(mon,"07")==0) mname="Jul";
    else if(strcmp(mon,"08")==0) mname="Aug";
    else if(strcmp(mon,"09")==0) mname="Sep";
    else if(strcmp(mon,"10")==0) mname="Oct";
    else if(strcmp(mon,"11")==0) mname="Nov";
    else if(strcmp(mon,"12")==0) mname="Dec";
    printf("%s-%s-%s\n", day, mname, year);
    return 0;
}