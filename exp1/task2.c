#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Function prototypes
void performArithmeticOperations(int num1, int num2);
void simpleCalculator();

// Part 0: Quick Revision Exercises

// 0.2 Operators and Expressions
void simpleCalculator() {
    // TODO: Implement a simple calculator using switch statement
}


int main() {
    srand(time(NULL));

    // 0.2 Operators and Expressions
    simpleCalculator();

    return 0;
}



int main() {
    int num1, num2;
    
    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Perform all arithmetic operations
    performArithmeticOperations(num1, num2);
    
    // Simple calculator
    simpleCalculator();

    return 0;
}

// Function to perform arithmetic operations
void performArithmeticOperations(int num1, int num2) {
    printf("Arithmetic Operations:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    if (num2 != 0) {
        printf("%d / %d = %f\n", num1, num2, (float)num1 / num2);
        printf("%d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Division and modulus operations are not possible with divisor 0.\n");
    }
}

// Function to implement a simple calculator
void simpleCalculator() {
    int num1, num2;
    char operator;
    
    printf("\nSimple Calculator:\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // Notice the space before %c to consume any trailing newline character
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
}
