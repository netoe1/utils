#ifndef SELECTIONSORT_C
#define SELECTIONSORT_C

#include <stdio.h>

// Função para trocar dois elementos no array
static void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para ordenar o array usando Selection Sort
void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Encontrar o menor elemento na parte não ordenada
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[min_idx]) {
                min_idx = j;
            }
        }
        // Trocar o menor elemento encontrado com o primeiro elemento não ordenado
        swap(&array[min_idx], &array[i]);
    }
}


#endif