#include <stdio.h>
#include <math.h>

// Function declarations
void addition();
void subtraction();
void multiplication();
void division();
void power();
void squareRoot();

int main() {
    int choice;
    char again;

    printf("=====================================\n");
    printf("        Simple Calculator v1.0       \n");
    printf("=====================================\n");

    do {
        printf("\nSelect an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (x^y)\n");
        printf("6. Square Root\n");
        printf("7. Exit\n");

        printf("\nEnter your choice (1-7): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication(); break;
            case 4: division(); break;
            case 5: power(); break;
            case 6: squareRoot(); break;
            case 7: 
                printf("\nExiting... Thank you for using the calculator!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please enter a number between 1 and 7.\n");
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &again);

    } while(again == 'y' || again == 'Y');

    printf("\nGoodbye!\n");
    return 0;
}

// Function definitions
void addition() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf + %.2lf = %.2lf\n", a, b, a + b);
}

void subtraction() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf - %.2lf = %.2lf\n", a, b, a - b);
}

void multiplication() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf × %.2lf = %.2lf\n", a, b, a * b);
}

void division() {
    double a, b;
    printf("Enter dividend and divisor: ");
    scanf("%lf %lf", &a, &b);
    if(b == 0)
        printf("Error: Division by zero is not allowed!\n");
    else
        printf("Result: %.2lf ÷ %.2lf = %.2lf\n", a, b, a / b);
}

void power() {
    double base, exp;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exp);
    printf("Result: %.2lf ^ %.2lf = %.2lf\n", base, exp, pow(base, exp));
}

void squareRoot() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if(num < 0)
        printf("Error: Negative numbers do not have real square roots.\n");
    else
        printf("Result: √%.2lf = %.2lf\n", num, sqrt(num));
}