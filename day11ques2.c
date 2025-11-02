#include <stdio.h>
int main() {
    float cp, sp, profit, loss, percent;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);
    if (sp > cp) {
        profit = sp - cp;
        percent = (profit * 100) / cp;
        printf("Profit percentage = %.2f\n", percent);
    } else if (cp > sp) {
        loss = cp - sp;
        percent = (loss * 100) / cp;
        printf("Loss percentage = %.2f\n", percent);
    } else {
        printf("No profit no loss\n");
    }
    return 0;
}