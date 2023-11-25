/* 3. Faça uma rotina recursiva para calcular a somatória
de todos os número de 0 a N (N será lido do teclado). */

#include <stdio.h>

int somatoria(int n);

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Somatoria: %d\n", somatoria(n));
    return 0;
}

int somatoria(int n){
    if(n == 0){
        return 0;
    }else{
        return n + somatoria(n-1);
    }
}