#include <stdio.h>
#include <stdlib.h>

int absolute(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}
int main() {
    int tam;         
    int *vet;        
    int proxzero = 0;
    int ocorren = 0; 
    scanf("%d", &tam);
    vet = (int *) malloc(sizeof(int) * tam);  
    if (vet == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vet[i]); 
    }
    proxzero = vet[0];  
    for (int i = 1; i < tam; i++) {
        if (absolute(vet[i]) < absolute(proxzero)) {
            proxzero = vet[i];
            ocorren = 1; 
        } else if (absolute(vet[i]) == absolute(proxzero)) {
            ocorren++;
            }
    }
    printf("%d\n", proxzero);
    for (int i = 0; i < tam; i++) {
        if (vet[i] == proxzero) {
            printf("%d ", i); 
        }
    }
    printf("\n");

    free(vet);
    vet = NULL;

    return 0;
}
