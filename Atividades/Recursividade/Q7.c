/* 
7. Implemente uma função recursiva que, dados dois
números inteiros x e n, calcula o valor de xn. 
*/

#include <stdio.h>

int potencia(int x, int n){
    if(n == 0){
        return 1;
    }else{
        return x * potencia(x, n-1);
    }
}

int main(){
    int x = 2, n = 3;
    printf("%d^%d = %d\n", x, n, potencia(x, n));
    return 0;
}
