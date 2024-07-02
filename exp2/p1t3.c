#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Part 1: Pointer Basics and Arithmetic
// function for printing all elements of array
void printArr(int *arr, int size){
  printf("The array elements are:\n");
    for (int i = 0; i < size; i++){
        printf("%d\n", *(arr + i));
    }

}

void sum(int *arr, int size){
  int sumArr = 0;
    for (int i = 0; i < size; i++){
      sumArr = sumArr + *(arr+i);
    }
    printf("The sum of all elements of array is %d\n", sumArr);
}

void reverseArray(int *arr, int size) {
    // TODO: Implement array reversal using pointers
    // variable for accesing last element of array
    int a;
    a = size - 1;
    int reversedArr[5];
    for (int i = 0; i < size; i++){
        *(reversedArr + i) = *(arr + a);
        a = a - 1;
    }
    // printing the reversed array
    printf("The revered array is:\n");
    for (int i = 0; i < size; i++){
        printf("%d\n", *(reversedArr + i));
    }
}

int main() {
    srand(time(NULL));

    // Part 1: Pointer Basics and Arithmetic
    printf("Part 1: Pointer Basics and Arithmetic\n");
    // TODO: Implement exercises 1.1, 1.2, and 1.3
    
    int arr[5] = {1, 2, 3, 4, 5};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    printArr(arr, size);
    sum(arr,size);
    reverseArray(arr, size);

}
