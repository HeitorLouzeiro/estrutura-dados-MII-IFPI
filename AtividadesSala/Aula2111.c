/* Crie uma lista de 3 posições do tipo Struct de pessoas.
O struct deve conter nome, idade , CPF e estado civil.
Adicione uma função para cadastrar as pessoas na lista. */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct de pessoas
typedef struct {
    char nome[50];
    int idade;
    char cpf[12];
    char estadoCivil[20];
} Pessoa;

/* 
    Função para cadastrar as pessoas na lista
    *pessoa = ponteiro para a struct ou seja 
        armazenará o endereço de memória de uma variável do tipo Pessoa
    tamanho = tamanho da lista
 */
void cadastrarPessoa(Pessoa *pessoa, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoa[i].nome);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoa[i].idade);
        printf("Digite o CPF da pessoa %d: ", i + 1);
        scanf("%s", pessoa[i].cpf);
        printf("Digite o estado civil da pessoa %d: ", i + 1);
        scanf("%s", pessoa[i].estadoCivil);
    }
}

/* 
    Função para imprimir as pessoas da lista
    
    tamanho = tamanho da lista
 */

void imprimirPessoa(Pessoa *pessoa, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Idade: %d\n", pessoa[i].idade);
        printf("CPF: %s\n", pessoa[i].cpf);
        printf("Estado Civil: %s\n", pessoa[i].estadoCivil);
    }
}

int main() {
    // Ponteiro para a struct
    Pessoa *pessoa;

    // Tamanho da lista
    int tamanho = 3;

/*     
    Alocação dinâmica de memória
    Malloc retorna um ponteiro genérico
    é o tamanho total da memória que você deseja alocar
    sizeof retorna o tamanho em bytes
    No caso o tamanho da struct Pessoa
*/
    
    pessoa = (Pessoa *) malloc(tamanho * sizeof(Pessoa));

    cadastrarPessoa(pessoa, tamanho);
    imprimirPessoa(pessoa, tamanho);

    // Libera a memória alocada
    free(pessoa);

    return 0;
}

