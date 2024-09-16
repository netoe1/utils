#ifndef QUICKSORT_C
#define QUICKSORT_C
#include <stdio.h>

// Função para trocar dois elementos no array
static void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para particionar o array e escolher o pivô
static int partition(int array[], int low, int high) {
    int pivot = array[high]; // Escolhe o último elemento como pivô
    int i = (low - 1); // Índice do menor elemento

    for (int j = low; j < high; j++) {
        // Se o elemento atual é menor ou igual ao pivô
        if (array[j] <= pivot) {
            i++; // Incrementa o índice do menor elemento
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]); // Coloca o pivô na posição correta
    return (i + 1);
}

// Função recursiva do Quicksort
void quickSort(int array[], int low, int high) {
    if (low < high) {
        // Particiona o array e obtém o índice do pivô
        int pi = partition(array, low, high);

        // Ordena recursivamente as subpartes
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

#endif