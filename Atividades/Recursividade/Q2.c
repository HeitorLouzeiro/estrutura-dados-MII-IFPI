/* 2. Faça uma rotina recursiva para calcular a somatória
de todos os número de 10 a 0. */

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
    printf("Soma de 10 a 0: %d\n", soma(n));
    return 0;
}