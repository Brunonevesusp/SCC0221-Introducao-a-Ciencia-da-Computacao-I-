#include <stdio.h>
#include <stdlib.h>

void aloca(int **v, int tam) {
    *v = (int*) malloc(tam * sizeof(int));
    if (*v == NULL) {
        printf("Sem memória!");
        exit(1);
    }

    for (int i = 0; i < tam; i++) {
        scanf("%d", &(*v)[i]);
    }
}

void somamultp(int *v, int *u, int tam) {
    int soma = 0;
    int multp = 0;
    for (int i = 0; i < tam; i++) {
        soma += v[i];
    }

    int somasecun = 0;
    for (int i = 0; i < tam; i++) {
        somasecun += u[i];
    }

    for (int i = 0; i < tam; i++) {
        multp += v[i] * u[i];
    }

    if (soma == somasecun) {
        printf("sao ortonormais\n");
    } else {
        printf("nao sao ortonormais\n");
    }
}

int main() {
    int tam;
    int *v, *u;

    scanf("%d", &tam);

    aloca(&v, tam);
    aloca(&u, tam);
    somamultp(v, u, tam);

    free(v);
    free(u);
    
    return 0;
}
