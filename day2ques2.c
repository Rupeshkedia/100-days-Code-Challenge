#include <stdio.h>

int main() 
{
    float r;
    float PI= 3.14;
    
    scanf("%f", &r);

    float area = PI * r * r;
    float circumference = 2 * PI * r;

    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}

