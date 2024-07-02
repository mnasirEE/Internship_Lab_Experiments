#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


// Part 3: Function Pointers

// Calculator functions
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }



int main() {
    srand(time(NULL));
    // Array of function pointers initialization
    // int (*p[4])(int, int) = {sum, subtract, mul, div};
    // function pointers initialization
    int (*addPtr)(int, int) = add;
    int (*subtractPtr)(int, int) = subtract;
    int (*multiplyPtr)(int, int) = multiply;
    int (*dividePtr)(int, int) = divide;

    // Part 3: Function Pointers
    printf("\nPart 3: Function Pointers\n");
    // TODO: Implement exercises 3.1, 3.2, and 3.3
    int num1 = 2;
    int num2 = 3;
    // Pointer Functions calling
    printf("The addition of num1 and num2 is: %d\n", addPtr(num1,num2));
    printf("The subtraction of num1 and num2 is: %d\n", subtractPtr(num1,num2));
    printf("The multiplication of num1 and num2 is: %d\n", multiplyPtr(num1,num2));
    printf("The division of num1 and num2 is: %d\n", dividePtr(num1,num2));

    return 0;
}
