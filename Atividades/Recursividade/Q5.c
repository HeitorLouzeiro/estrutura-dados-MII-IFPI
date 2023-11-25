/* 5. Escreva um método recursivo em C que, dados dois
inteiros a e b (a <= b), retorna a multiplicação dessa
faixa de números. */

#include <stdio.h>

int mult(int a, int b){
    if(a == b){
        return a;
    }else{
        return a * mult(a+1, b);
    }
}

int main(){
    int a = 2, b = 5;
    printf("Multiplicacao de %d a %d: %d\n", a, b, mult(a, b));
    return 0;
}
