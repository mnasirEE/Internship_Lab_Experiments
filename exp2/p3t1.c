#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


// Part 3: Function Pointers
void bubbleSort(int *arr, int size) {
    // TODO: Implement bubble sort
  for(int j =0; j< size; j++){
    int swap = 0;
        
        for (int i = 0; i < size-1; i++){
            if(*(arr+i) > *(arr+i+1)){
                int temp;
                temp = *(arr+i+1);
                *(arr + i + 1) = *(arr + i);
                *(arr + i) = temp;
                swap = 1;
            }

        }
        if (!swap){
            break;
        }
    }
}





int main() {
    srand(time(NULL));

   

    // Part 3: Function Pointers
    printf("\nPart 3: Function Pointers\n");
    // TODO: Implement exercises 3.1, 3.2, and 3.3

    int n;
   n = 5;
   int arr[5] = {15, 33, 49, 10, 20}; //initialize an array 
   printf("Array before Sorting: ");
   for(int i = 0; i<n; i++) {
      printf("%d ",arr[i]);
   }
   printf("\n");
   bubbleSort(arr, n);
   printf("Array after Sorting: ");
   for(int i = 0; i<n; i++){
      printf("%d ", arr[i]);
   }
   printf("\n");
    return 0;
}
