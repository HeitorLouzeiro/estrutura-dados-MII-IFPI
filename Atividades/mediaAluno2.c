        
/* Um Menu recorrente utilizando um Laço While em junção com um Switch Case
- assim se o usuário não informar a turma do aluno o programa
não segue para a inserção do nome e das notas do aluno.
Criar um STRUCT para colocar o Nome, Turma, Notas, Média, ProvaFinal, e ResultadoFinal do aluno. 
*/

#include <stdio.h>
#include <string.h>


/* struct para armazenar os dados do aluno; */
/* struct serve para agrupar informaçoes relacionados em um unico objeto. */

struct Aluno
{
    char nome[30];
    char turma[10]; // um array para armazenas os caracteres da turma A, B, C, D, E
    float nota1;
    float nota2;
    float media;
    float provaFinal;
    char resultadoFinal[20]; // Um array de caracteres para salvar Aprovado, Reprovado
};

int main() {
    // Variável para controlar o loop
    int continuar = 1;

    // Instanciar uma estrutura do tipo Aluno
    struct Aluno aluno;

    /* strcpy serve para copiar uma string para outra. */
    strcpy(aluno.turma, "");

    // Loop principal
    while (continuar) {
        int escolha;
        printf("Selecione uma opcao:\n");
        printf("1. Inserir turma do aluno\n");
        printf("2. Inserir nome e notas do aluno\n");
        printf("3. Sair\n");
        printf("Opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Informe a turma do aluno: ");
                scanf("%s", aluno.turma);
                break;
            case 2:
                if (strlen(aluno.turma) == 0) {
                    printf("Voce deve informar a turma antes de inserir o nome e as notas do aluno.\n");
                } else {
                    printf("Informe o nome do aluno: ");
                    scanf("%s", aluno.nome);

                    printf("Informe a primeira nota do aluno: ");
                    scanf("%f", &aluno.nota1);

                    printf("Informe a segunda nota do aluno:");
                    scanf("%f", &aluno.nota2);
                    

                    // Calcular a média
                    aluno.media = (aluno.nota1 + aluno.nota2) / 2;

                    // Determinar se o aluno precisa de uma prova final
                    if (aluno.media < 5.0) {
                        printf("O aluno precisa fazer a prova final.\n");
                        printf("Informe a nota da prova final do aluno: ");
                        scanf("%f", &aluno.provaFinal);
                        if ((aluno.media + aluno.provaFinal) / 2 < 5.0) {
                            strcpy(aluno.resultadoFinal, "Reprovado");
                        } else {
                            strcpy(aluno.resultadoFinal, "Aprovado");
                        }
                    } else {
                        strcpy(aluno.resultadoFinal, "Aprovado");
                    }

                    float mediaResultadoFinal = (aluno.media + aluno.provaFinal) / 2;

                    // Imprimir os resultados
                    printf("Nome do aluno: %s\n", aluno.nome);
                    printf("Turma do aluno: %s\n", aluno.turma);
                    printf("Media do aluno: %.2f\n", aluno.media);
                    printf("Nota da media final do aluno: %.2f\n", mediaResultadoFinal);
                    printf("Resultado Final: %s\n", aluno.resultadoFinal);
                }
                break;
            case 3:
                continuar = 0;
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}