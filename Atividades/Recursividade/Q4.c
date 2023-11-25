/* 4. Crie um programa em Linguagem C que conte os
dígitos de um determinado número usando recursão. */

#include <stdio.h>

int contaDigitos(int n);

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Numero de digitos: %d\n", contaDigitos(n));
    return 0;
}

int contaDigitos(int n){
    if(n < 10){
        return 1;
    }else{
        return 1 + contaDigitos(n/10);
    }
}