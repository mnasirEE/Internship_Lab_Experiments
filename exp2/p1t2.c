#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Part 1: Pointer Basics and Arithmetic
void swap(int *a, int *b) {
    // Swapping values of *a and *b using a temporary variable
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    srand(time(NULL));

    // Part 1: Pointer Basics and Arithmetic
    printf("Part 1: Pointer Basics and Arithmetic\n");

    // Declare two integers and initialize them with random values
    int num1 = rand() % 100;  // Random value between 0 and 99
    int num2 = rand() % 100;  // Random value between 0 and 99

    // Print unswapped values
    printf("The unswapped value of num1 is: %d\n", num1);
    printf("The unswapped value of num2 is: %d\n", num2);

    // Call swap function
    swap(&num1, &num2);

    // Print swapped values
    printf("The swapped value of num1 is: %d\n", num1);
    printf("The swapped value of num2 is: %d\n", num2);

    return 0;
}
