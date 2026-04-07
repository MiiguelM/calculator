#include <stdio.h>

int main() {
    int option;
    float x, y;
    printf(" - Choose an option - \n");
    printf("\n");
    
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("\n");
    printf("--> ");

    scanf("%d", &option);
    switch(option)
    {
    case 1:
        printf("You chose addition\n");
        printf("Enter the first number: ");
        scanf("%f", &x);
        printf("\n");
        printf("Enter the second number:");
        scanf("%f", &y);
        printf("Result: %.2f", x + y);
        break;
    
    case 2:
        printf("You chose subtraction\n");
        printf("Enter the first number: ");
        scanf("%f", &x);
        printf("\n");
        printf("Enter the second number: ");
        scanf("%f", &y);
        printf("Result: %.2f", x - y);
        break;

    default:
        printf("Invalid option\n");
    }
}