#ifndef SORT_C
#define SORT_C
#include "./sorts/bubblesort.c"
#include "./sorts/mergesort.c"
#include "./sorts/quicksort.c"
#include "./sorts/selectionsort.c"


void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

#endif