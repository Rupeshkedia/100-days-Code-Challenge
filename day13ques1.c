#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%d %d", &a, &b);
    switch(op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/': 
            if(b != 0) printf("%d\n", a / b);
            else printf("Division by zero error\n");
            break;
        case '%': 
            if(b != 0) printf("%d\n", a % b);
            else printf("Division by zero error\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}