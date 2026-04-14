#include <stdio.h>

int main() {
    int option = -1;
    float x, y;

    while (option != 0){ // while option are different of 0, the code run
    
        printf("\n-- CALCULATOR --\n");
        printf("\n");
        printf("Select an option\n");
        printf("\n");

        printf("1 - Addition\n");
        printf("2 - Subtraction\n");
        printf("3 - Multiplication\n");
        printf("4 - Division\n");
        printf("0 - Exit\n");
        printf("\n");

        printf("Enter the option: ");
        scanf("%d", &option);
    

        switch (option)
        {
        case 1:
            printf("You chose Addition\n");
            printf("\n");
            printf("Enther the first number: ");
            scanf("%f", &x);
            printf("%.2f + ", x);
            scanf("%f", &y);
            printf("Result: %.2f\n", x + y);
        break;
    
        case 2:
            printf("You chose subtraction\n");
            printf("\n");
            printf("Enter the first number: ");
            scanf("%f", &x);
            printf("%.2f - ", x);
            scanf("%f", &y);
            printf("Result: %.2f\n", x - y);
        break;

        case 3:
            printf("You chose multiplication\n");
            printf("\n");
            printf("Enter the first number: ");
            scanf("%f", &x);
            printf("%.2f * ", x);
            scanf("%f", &y);
            printf("Result: %.2f\n", x * y);
        break;

        case 4: 
            printf("You chose division\n");
            printf("\n");
            printf("Enter the first number: ");
            scanf("%f", &x);
            printf("%.2f / ", x);
            scanf("%f", &y);
            printf("Result: %.2f", x / y);
        break;

        case 0:
            printf("Exiting...\n");
        break;

        default:
            printf("Invalid option.");
        break;
        }
    }

    return 0;
}