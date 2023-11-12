#include <stdio.h>

// Definindo uma estrutura para o registro de pessoa
struct Pessoa {
    int id;
    char nome[50];
    int idade;
    // Adicione outros campos conforme necessário
};

// Função que procura e imprime os detalhes de uma pessoa com base no ID
void buscarRegistroPorID(struct Pessoa pessoas[], int tamanho, int id) {
    int encontrado = 0;

    // Percorre o vetor em busca do registro com o ID fornecido
    for (int i = 0; i < tamanho; ++i) {
        if (pessoas[i].id == id) {
            encontrado = 1;
            printf("Registro encontrado:\n");
            printf("ID: %d\n", pessoas[i].id);
            printf("Nome: %s\n", pessoas[i].nome);
            printf("Idade: %d\n", pessoas[i].idade);
            // Adicione outros campos conforme necessário
            break;  // Encerra o loop, pois o registro foi encontrado
        }
    }

    // Se o registro não for encontrado, emite uma mensagem
    if (!encontrado) {
        printf("Registro com ID %d não encontrado.\n", id);
    }
}

int main() {
    // Exemplo de uso

    // Criando um vetor de pessoas
    struct Pessoa pessoas[] = {
        {1, "Joao", 25},
        {2, "Maria", 30},
        {3, "Carlos", 22},
        // Adicione outros registros conforme necessário
    };

    // Tamanho do vetor de pessoas
    int tamanho = sizeof(pessoas) / sizeof(pessoas[0]);

    // Chamando a função para buscar um registro pelo ID
    int idParaBuscar;
    printf("Digite o ID a ser buscado: ");
    scanf("%d", &idParaBuscar);

    buscarRegistroPorID(pessoas, tamanho, idParaBuscar);

    return 0;
}
