#include <stdio.h>

int main() {
    int option;
    printf(" - Choose an option - \n");
    printf("\n");
    
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    printf("0 - Exit\n");
    printf("\n");
    printf("--> ");

    scanf("%d", &option);
    switch(option)
    {
    case 1:
        printf("Addition\n");
        break;
    
    case 2:
        printf("Subtraction\n");
        break;

    case 3:
        printf("Multiplication\n");
        break;
        
    case 4:
        printf("Division\n");
        break;
    
    case 0:
        printf("Exiting...");
        break;

    default:
        printf("Invalid option\n");
    }
}