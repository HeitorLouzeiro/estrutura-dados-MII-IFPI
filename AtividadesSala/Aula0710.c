/* 
No codigo media, acrecentem um menu recorrente utlizando a estrutura de repeticao 
while e ou switch case.
Assim se o usuario não informar a turma do aluno o progama 
não deve seguir para a inserção do nome e das notas. 
*/

#include <stdio.h>

// Para usar a função toupper
#include <ctype.h>

int main(){
    char nome[30];
    char turma;
    float nota1, nota2, nota3, media;
    int opcao = 1;
    
    while (opcao == 1){
        printf("Digite a turma do aluno (A,B,C): ");
        scanf(" %c", &turma);

        // Converte para maiusculo
        turma = toupper(turma);

        /* 
            Limpar o buffer de entrada ou seja evita que o proximo caracter
            seja lido como um caracter invalido
        */
        
        while (getchar() != '\n');

        switch (turma)
        {
        case 'A':
        case 'B':
        case 'C':
            printf("Digite o nome do aluno: ");
            scanf("%s", nome);
            printf("Digite a nota 1: ");
            scanf("%f", &nota1);
            printf("Digite a nota 2: ");
            scanf("%f", &nota2);
            printf("Digite a nota 3: ");
            scanf("%f", &nota3);
            media = (nota1 + nota2 + nota3) / 3;
            printf("A media do aluno %s e %.2f\n", nome, media);
            break;
        
        default:
            printf("Turma invalida\n");
            break;
        }

        printf("Deseja continuar? (1-Sim/2-Nao) ");
        scanf("%d", &opcao);

        if (opcao != 1){
            break;
        }
    }
    return 0;
}