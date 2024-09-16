#ifndef MERGESORT_C
#define MERGESORT_C

#include <stdio.h>
#include <stdlib.h>

// Função para mesclar duas metades do array
static void merge(int array[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    // Criar arrays temporários
    int *L = (int*)malloc(n1 * sizeof(int));
    int *R = (int*)malloc(n2 * sizeof(int));
    
    // Copiar dados para arrays temporários L[] e R[]
    for (int i = 0; i < n1; i++)
        L[i] = array[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];
    
    // Mesclar os arrays temporários de volta no array original
    int i = 0; // Índice inicial do subarray L[]
    int j = 0; // Índice inicial do subarray R[]
    int k = left; // Índice inicial do subarray array[]
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        } else {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    
    // Copiar os elementos restantes de L[], se houver
    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }
    
    // Copiar os elementos restantes de R[], se houver
    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
    
    // Liberar memória
    free(L);
    free(R);
}

// Função recursiva do Merge Sort
void mergeSort(int array[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        // Ordenar a primeira e a segunda metade
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);
        
        // Mesclar as duas metades ordenadas
        merge(array, left, mid, right);
    }
}
#endif