#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


// Part 2: Pointers and Arrays
void initializeMatrix(int rows, int cols, int (*matrix)[cols]) {
    // TODO: Initialize matrix with random values
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            *(*(matrix + i) + j) = rand() % 100;
        } 
    }
}

void printMatrix(int rows, int cols, int (*matrix)[cols]) {
    // TODO: Print the matrix
  printf("The 2D Matrix is:\n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
	  printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}

void sumRows(int rows, int cols, int (*matrix)[cols]) {
    // TODO: Print the matrix
    int sum = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            sum = sum + (*(*(matrix + i) + j));
        }
        // printing sum of rows
        printf("The sum of row %d is: %d\n", (i + 1), sum);
        // make sum to zero
        sum = 0;
    }
}


int main() {
    srand(time(NULL));

    // Part 2: Pointers and Arrays
    printf("\nPart 2: Pointers and Arrays\n");
    // TODO: Implement exercises 2.1 and 2.2
    int matrixA[3][4];
    initializeMatrix(3, 4, matrixA);
    printMatrix(3, 4, matrixA);
    sumRows(3,4,matrixA);

    return 0;
}
