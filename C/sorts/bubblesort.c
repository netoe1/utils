#ifndef BUBBLESORT_C
#define BUBBLESORT_C
#include <stdio.h>

// Função para trocar dois elementos no array
static void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para ordenar o array usando Bubble Sort
void bubbleSort(int array[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        // Últimos i elementos já estão na posição correta
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Trocar os elementos se estiverem na ordem errada
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}





#endif