#include <stdio.h>
#include <stdlib.h>

int main() {
    char nomarq[100];
    
    scanf("%s", nomarq);

    FILE* arquivo = fopen(nomarq, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fseek(arquivo, 0, SEEK_END);


    long int tamanho = ftell(arquivo);

    printf("%ld\n", tamanho);

    fclose(arquivo);
    return 0;
}
