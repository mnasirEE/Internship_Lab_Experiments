#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Part 0: Quick Revision Exercises

// 0.1 Basic Syntax and Data Types
void printSizes() {
    // Declare variables of different types
    int var1;
    char var2;
    float var3;
    double var4;
    
    // Print their sizes using %zu for size_t
    printf("Size of int: %zu bytes\n", sizeof(var1));
    printf("Size of char: %zu bytes\n", sizeof(var2));
    printf("Size of float: %zu bytes\n", sizeof(var3));
    printf("Size of double: %zu bytes\n", sizeof(var4));
}

void demonstrateTypeCasting() {
    int intVal = 10;
    float floatVal = 5.5;
    double doubleVal = 20.25;
    char charVal = 'A';

    // Demonstrate type casting
    printf("int to float: %f\n", (float)intVal);
    printf("float to int: %d\n", (int)floatVal);
    printf("double to int: %d\n", (int)doubleVal);
    printf("char to int: %d\n", (int)charVal);
}

int main() {
    printSizes();
    demonstrateTypeCasting();
    return 0;
}
