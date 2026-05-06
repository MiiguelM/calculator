#include <stdio.h>

void addition(){
    float x, y;
    printf("\nEnter the first number: ");
    scanf("%f", &x);
    printf("%.2f + ", x);
    scanf("%f", &y);
    printf("\nResult: %.2f\n", x + y);
}

void subtraction(){
    float x, y;
    printf("\nEnter the first number: ");
    scanf("%f", &x);
    printf("%.2f - ", x);
    scanf("%f", &y);
    printf("\nResult: %.2f\n", x - y);
}

void multiplication(){
    float x, y;
    printf("\nEnter the first number: ");
    scanf("%f", &x);
    printf("%.2f * ", x);
    scanf("%f", &y);
    printf("\nResult: %.2f\n", x * y);   
}

void division(){
    float x, y;
    printf("\nEnter the first number: ");
    scanf("%f", &x);
    printf("%.2f / ", x);
    scanf("%f", &y);

    if (y == 0) {
        printf("Error: division by zero is not allowed.\n");
    } else {
        printf("\nResult: %.4f\n", x / y);
    }    
}

int main(){
    int option = -1;
    while (option != 0) {
    printf("\n-- CALCULATOR --\n");
    printf("\n Select an option:\n");
    printf("\n 1- Adition\n");
    printf(" 2 - Subtraction\n");
    printf(" 3 - Multiplication\n");
    printf(" 4 - Division\n");
    printf(" 0 - Exit\n");
    printf("\n --> ");
    
    if (scanf("%d", &option) == 0) {
        while (getchar() != '\n');
        printf("Invalid input. Please enter a number.\n");
        continue;
    }

    switch (option) {

    case 1:
        printf("\nYou select adicition\n");
        addition();
        break;
    case 2: 
        printf("\nYou select subtraction\n");
        subtraction();
        break;
    case 3:
        printf("\nYou select multiplication\n");
        multiplication();
        break;
    case 4:
        printf("\nYou select division\n");
        division();
        break;
    case 0:
        printf("\nExiting...");
        break;
    default:
        printf("\nInvalid option. Try again.");
        break;
    }
}
}