#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomArqRespo[100];
    //printf("Digite o nome do arquivo com as respostas do aluno: ");
    scanf("%s", nomArqRespo);

    char nomArqGab[100];
   // printf("Digite o nome do arquivo com o gabarito da prova: ");
    scanf("%s", nomArqGab);

    FILE* arqResp = fopen(nomArqRespo, "r");
    FILE* arqGab = fopen(nomArqGab, "r");

    if (arqResp == NULL || arqGab == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    char respAlun[100];
    char gab[100];

    fgets(respAlun, 100, arqResp);
    fgets(gab, 100, arqGab);

    int tamResp = strlen(respAlun);
    int tamGab = strlen(gab);

    if (tamResp != tamGab) {
        printf("Erro: os arquivos possuem tamanhos diferentes.\n");
        return 1;
    }

    int nota = 0;
    for (int i = 0; i < tamResp; i++) {
        if (respAlun[i] == gab[i]) {
            nota++;
        }
    }

    printf("%d ", nota);

    if (nota >= 5) {
        printf("APROVADO\n");
    } else if (nota >= 3) {
        printf("RECUPERACAO\n");
    } else {
        printf("REPROVADO\n");
    }

    fclose(arqResp);
    fclose(arqGab);

    return 0;
}
