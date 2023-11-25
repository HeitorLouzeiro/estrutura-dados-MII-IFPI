/*
Individualmente, enviar código com a média em C e 
com as mensagens referentes ao status do aluno:

Aprovado - Média maior que 7
Prova Final - Média menor que 7 e maior ou igual a 4
Reprovado - Média menor que 4 
*/

#include <stdio.h>

int main()
{
    int nota1, nota2;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    media = (nota1 + nota2) / 2;

    if (media > 7)
    {
        printf("Aprovado");
    }
    else if (media >= 4 && media < 7)
    {
        printf("Prova Final");
    }
    else
    {
        printf("Reprovado");
    }

}