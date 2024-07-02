#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


// Part 2: Pointers and Arrays
void initializeMatrix(int rows, int cols, int (*matrix)[cols]) {
    // TODO: Initialize matrix with random values
    int value = 1;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            *(*(matrix + i) + j) = value;
	    value++;
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

int findMaxInMatrix(int rows, int cols, int (*matrix)[cols]) {
    // TODO: Find and return the maximum element in the matrix
    // let suppose first element is maximum
    int max = *(*(matrix));
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if ( (*(*(matrix + i) + j)) > max ){
	      max = *(*(matrix + i) + j);
            }
        } 
    }
    return max;
}



int main() {
    srand(time(NULL));

    // Part 2: Pointers and Arrays
    printf("\nPart 2: Pointers and Arrays\n");
    // TODO: Implement exercises 2.1 and 2.2
    int matrixA[3][4];
    initializeMatrix(3, 4, matrixA);
    printMatrix(3, 4, matrixA);
    int maxNum = findMaxInMatrix(3, 4, matrixA);
    printf("The maximum number is: %d", maxNum);

    return 0;
}
