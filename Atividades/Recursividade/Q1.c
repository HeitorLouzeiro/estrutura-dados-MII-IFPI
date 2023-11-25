/* 1. Faça uma rotina recursiva para calcular a somatória
de todos os número de 0 a 10. */

#include <stdio.h>

int soma(int n){
    if(n == 0){
        return 0;
    }else{
        return n + soma(n-1);
    }
}

int main(){
    int n = 10;
    printf("Soma de 0 a 10: %d\n", soma(n));
    return 0;
}