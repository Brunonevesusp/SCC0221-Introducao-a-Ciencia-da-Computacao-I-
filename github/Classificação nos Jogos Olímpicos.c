#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char sigla[4];
    int ouro;
    int prata;
    int bronze;
} Pais;

int compais(const void* a, const void* b) {
    Pais* paisA = (Pais*)a;
    Pais* paisB = (Pais*)b;

    if (paisA->ouro > paisB->ouro)
        return -1;
    else if (paisA->ouro < paisB->ouro)
        return 1;

    if (paisA->prata > paisB->prata)
        return -1;
    else if (paisA->prata < paisB->prata)
        return 1;

    if (paisA->bronze > paisB->bronze)
        return -1;
    else if (paisA->bronze < paisB->bronze)
        return 1;

    return 0;
}

int main() {
    int n;

    scanf("%d", &n);

    Pais* paises = (Pais*)malloc(n * sizeof(Pais));

    for (int i = 0; i < n; i++) {
        scanf("%s", paises[i].sigla);
        scanf("%d", &paises[i].ouro);
        scanf("%d", &paises[i].prata);
        scanf("%d", &paises[i].bronze);
        
    }

    qsort(paises, n, sizeof(Pais), compais);

//    printf("Quadro de Medalhas:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d\n",paises[i].sigla, paises[i].ouro, paises[i].prata, paises[i].bronze);
    }

    free(paises);
    return 0;
}
