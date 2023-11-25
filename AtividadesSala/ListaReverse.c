#include "stdio.h"

// vetor com 5 elementos
void imprimir(int v[5]){
    // imprime os elementos do vetor
    int i;

    // percorre o vetor
    // i = 0, 1, 2, 3, 4
    for(i=0;i<5;i++){
        // imprime o elemento
        printf("%d ",v[i]);
    }
    printf("\n");
}

void imprimirReverse(int v[5]){
    // imprime os elementos do vetor
    int i;

    // percorre o vetor de tras para frente
    // i = 4, 3, 2, 1, 0
    for(i=4;i>=0;i--){
        // imprime o elemento
        printf("%d ",v[i]);
    }
    printf("\n");
}

int main(){
    // vetor com 5 elementos
    //int v[5] = {1,2,3,4,5};

    int v[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        
        // le o elemento e armazena no vetor
        scanf("%d",&v[i]);
    }
    
    // imprime o vetor
    imprimir(v);

    // imprime o vetor de tras para frente
    imprimirReverse(v);

    return 0;
}