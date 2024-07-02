#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Part 1: Pointer Basics and Arithmetic


int main() {
    srand(time(NULL));

    // Part 1: Pointer Basics and Arithmetic
    printf("Part 1 task 1: Pointer Basics and Arithmetic\n");
    // TODO: Implement exercises 1.1, 1.2, and 1.3
    // declaring variable and a pointer that points to it
    int a = 10;
    int *ptr = &a;
    // printing a on terminal
    printf("The value of a is: %d\n", a);
    printf("The value of a accesed by pointer is: %d\n", *ptr);
    // changing value of a using pointer
    *ptr = 20;
    printf("The changed value of a using pointer is: %d\n", a);

}
