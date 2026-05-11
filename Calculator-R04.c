#include <stdio.h>

float addition(float x, int useResult){
    float y;
    if (useResult){
        printf("\nEnter the first number: ");
        while (scanf("%f", &x) == 0){
            while (getchar() != '\n');
            printf("\nInvalid input, please enter a number.");
            printf("\nEnter the first number: ");
        }
    }
    printf("%.2f + ", x);
    while (scanf("%f", &y) == 0){
        while(getchar() != '\n');
        printf("Invalid input, please enter a number.\n");
        printf("%.2f + ", x);
    }
    printf("Result: %.2f", x + y);
    return x + y;
}

float subtraction(float x, int useResult){
    float y;
    if (useResult){
        printf("\nEnter the first number: ");
        while (scanf("%f", &x)){
            while (getchar() != '\n');
            printf("Invalid input, please enter a number.\n");
            printf("\nEnter the first number: ");
        }
    }
    printf("%.2f - ", x);
    while (scanf("%f", &y) == 0){
        while(getchar() != '\n');
        printf("Invalid input, please enter a number.\n");
        printf("%.2f - ", x);
    }
    printf("Result: %.2f", x - y);
    return x - y;
}

float multiplication(float x, int useResult){
    float y;
    if (useResult){
        printf("\nEnter the first number: ");
        while (scanf("%f", &x) == 0){
            while (getchar() != '\n');
            printf("Invalid input, please enter a number.\n");
            printf("\nEnter the first number: ");
        }
    }
    printf("%.2f * ", x);
    while (scanf("%f", &y) == 0 ){
        while (getchar() != '\n');
        printf("Invalid input, please enter a number.\n");
        printf("%.2f * ", x);
    }
    printf("Result: %.2f", x * y);
    return x * y;
}

float division(float x, int useResult){
    float y;
    if (useResult){
        printf("\nEnter the first number: ");
        while (scanf("%f", &x) == 0){
            while (getchar() != '\n');
            printf("Invalid input, please enter a number.\n");
            printf("\nEnter the first number: ");
        }
    }
    printf("%.2f / ", x);
    while (scanf("%f", &y) == 0){
        while(getchar() != '\n');
        printf("Invalid input, please enter a number.\n");
        printf("%.2f / ", x);
    }
    if (y == 0){
        printf("Invalid input. Please try again");
        return x;
    } 
    else {
        printf("Result: %.2f", x / y);
        return x / y;
    }
}

int main(){
    float result = 0;
    int ongoing = 0;
    int option = -1;
    while (option != 0){
    printf("\n--CALCULATOR--\n");
    printf("\n Select an option:\n");
    printf("\n1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    printf("5 - Reset\n");
    printf("0 - Exit\n");
    printf("\n--> ");

    if (scanf("%d", &option) == 0){
        while (getchar() != '\n');
        printf("Invalid input. Please enter a number.");
        continue;
    }

    switch (option) {
    case 1:
        printf("\nYou select addition.\n");
        result = addition(result, !ongoing);
        ongoing = 1;
        break;
    case 2: 
        printf("\nYou select subtraction.\n");
        result = subtraction(result, !ongoing);
        ongoing = 1;
        break;
    case 3:
        printf("\nYou select multiplication.\n");
        result = multiplication(result, !ongoing);
        ongoing = 1;
        break;
    case 4:
        printf("\nYou select division.\n");
        result = division(result, !ongoing);
        ongoing = 1;
        break;
    case 5:
        printf("\nReseting...\n");
        result = 0;
        ongoing = 0;
        break;
    case 0:
        printf("Exiting...");
        break;
    default:
        printf("Invalid option, please try again.");
        break;
    }
}
}