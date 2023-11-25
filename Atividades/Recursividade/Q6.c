/* 6. Dado um array de inteiros e o seu número de
elementos, inverta a posição dos seus elementos. */

#include <stdio.h>

// Print an array of integers
void printArray(int *array, int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Swap two elements of an array
void swap(int *array, int i, int j){
    int aux = array[i];
    array[i] = array[j];
    array[j] = aux;
}

// Reverse an array
void reverse(int *array, int size){
    int i;
    for(i = 0; i < size/2; i++){
        swap(array, i, size-i-1);
    }
}

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(int);
    printArray(array, size);
    reverse(array, size);
    printArray(array, size);
    return 0;
}
