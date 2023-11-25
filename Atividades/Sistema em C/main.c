/* Fazer um algoritmo em C para automatizar aluguéis de carro sob o seguinte prisma:

1. Cada cliente pode alugar 1 ou mais carros;
2. Os dados dos carros serão: Marca, Modelo, Ano e Cor;
3. Precisa armazenar quantidade de diárias e valor por dia e o total;

--> Com Vetor de Struct e menu com case, armazenar os alugueis do dia.

Dica: Usem funções com passagem de parâmetro. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

typedef struct
{
    char marca[20];
    char modelo[20];
    int ano;
    char cor[20];
    int diarias;
    float valorDiaria;
    float total;
} Carro;

void cadastrarCarro(Carro *carros, int *qtdCarros);
void listarCarros(Carro *carros, int *qtdCarros);
void alugarCarro(Carro *carros, int *qtdCarros);

void listarCarros(Carro *carros, int *qtdCarros)
{
    int i;
    printf("\n\n");
    printf("Lista de carros disponiveis para aluguel:\n");
    for (i = 0; i < *qtdCarros; i++)
    {
        printf("\nCarro %d\n", i + 1);
        printf("Marca: %s\n", carros[i].marca);
        printf("Modelo: %s\n", carros[i].modelo);
        printf("Ano: %d\n", carros[i].ano);
        printf("Cor: %s\n", carros[i].cor);
        printf("Diarias: %d\n", carros[i].diarias);
        printf("Valor da diaria: %.2f\n", carros[i].valorDiaria);
        printf("Total: %.2f\n", carros[i].total);
    }
}

void cadastrarCarro(Carro *carros, int *qtdCarros)
{
    printf("\n\n");
    printf("Cadastro de carro:\n");
    printf("Marca: ");
    scanf("%s", carros[*qtdCarros].marca);
    printf("Modelo: ");
    scanf("%s", carros[*qtdCarros].modelo);
    printf("Ano: ");
    scanf("%d", &carros[*qtdCarros].ano);
    printf("Cor: ");
    scanf("%s", carros[*qtdCarros].cor);
    printf("Diarias: ");
    scanf("%d", &carros[*qtdCarros].diarias);
    printf("Valor da diaria: ");
    scanf("%f", &carros[*qtdCarros].valorDiaria);
    carros[*qtdCarros].total = carros[*qtdCarros].diarias * carros[*qtdCarros].valorDiaria;
    *qtdCarros = *qtdCarros + 1;
}

void alugarCarro(Carro *carros, int *qtdCarros)
{
    int i, opcao;
    char modelo[20];
    printf("\n\n");
    listarCarros(carros, qtdCarros);
    
    printf("Aluguel de carro:\n");
    printf("Digite o modelo do carro que deseja alugar: ");
    scanf("%s", modelo);
    for (i = 0; i < *qtdCarros; i++)
    {
        if (strcmp(carros[i].modelo, modelo) == 0)
        {
            printf("\nCarro %d\n", i + 1);
            printf("Marca: %s\n", carros[i].marca);
            printf("Modelo: %s\n", carros[i].modelo);
            printf("Ano: %d\n", carros[i].ano);
            printf("Cor: %s\n", carros[i].cor);
            printf("Diarias: %d\n", carros[i].diarias);
            printf("Valor da diaria: %.2f\n", carros[i].valorDiaria);
            printf("Total: %.2f\n", carros[i].total);
            printf("\nDeseja alugar esse carro?\n");
            printf("1 - Sim\n");
            printf("2 - Nao\n");
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                printf("\nCarro alugado com sucesso!\n");
            }
            else
            {
                printf("\nCarro nao alugado!\n");
            }
        }
    }
}

int main()
{
    Carro carros[TAM];
    int opcao, qtdCarros = 0;
    do
    {
        printf("\n\n");
        printf("1 - Cadastrar carro\n");
        printf("2 - Listar carros\n");
        printf("3 - Alugar carro\n");
        printf("4 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            cadastrarCarro(carros, &qtdCarros);
            break;
        case 2:
            listarCarros(carros, &qtdCarros);
            break;
        case 3:
            alugarCarro(carros, &qtdCarros);
            break;
        case 4:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
        }
    } while (opcao != 4);
    return 0;
}


