#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int idade;
    char cargo[100];
    float salario;
} Pessoa;

int main() {
    char nomeArq[100];
    float valorX;

    scanf("%s", nomeArq);

    scanf("%f", &valorX);

    FILE* arquivo = fopen(nomeArq, "r");
    if (arquivo == NULL) {
        printf("Este banco de dados nao existe.\n");
        return 1;
    }

    int quantPessoas;
    fscanf(arquivo, "%d", &quantPessoas);

    Pessoa* pessoas = (Pessoa*)malloc(quantPessoas * sizeof(Pessoa));
    if (pessoas == NULL) {
        printf("Falha na alocação de memória.\n");
        fclose(arquivo);
        return 1;
    }

    for (int i = 0; i < quantPessoas; i++) {
        fscanf(arquivo, "%s", pessoas[i].nome);
        fscanf(arquivo, "%d", &pessoas[i].idade);
        fscanf(arquivo, "%s", pessoas[i].cargo);
        fscanf(arquivo, "%f", &pessoas[i].salario);
    }

    for (int i = 0; i < quantPessoas; i++) {
        if (pessoas[i].salario > valorX) {
            printf("%s\n", pessoas[i].nome);
            printf("%d\n", pessoas[i].idade);
            printf("%s\n", pessoas[i].cargo);
            printf("%3.f\n", pessoas[i].salario);
           // printf("\n");
        }
    }

    free(pessoas);
    fclose(arquivo);

    return 0;
}
