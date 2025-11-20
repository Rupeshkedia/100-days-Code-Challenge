#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");
    if(fp == NULL) {
        printf("Error opening file");
        return 1;
    }

    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt");
    return 0;
}