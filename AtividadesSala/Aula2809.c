/* Receber duas notas de um aluno e calcular a média. 
Se a média for maior ou igual a 7, imprimir "Aprovado", 
se for maior ou igual a 5 e menor que 7, imprimir "Recuperação", 
se for menor que 5, imprimir "Reprovado". */
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

    if (media >= 7)
    {
        printf("Aprovado");
    }
    else if (media >= 5 && media < 7)
    {
        printf("Recuperação");
    }
    else
    {
        printf("Reprovado");
    }

}
