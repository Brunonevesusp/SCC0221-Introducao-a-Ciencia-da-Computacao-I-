#include <stdio.h>
#include <stdlib.h>

void aloca(int ***mat, int lin, int col);
void preenche(int **mat, int lin, int col);
// void imprime(int **mat, int lin, int col);
int quadradomagico(int **mat, int lin, int col);

int main() {
    int n;
    int lin, col;
    int **mat;

    scanf("%d", &n);

    lin = col = n;

    aloca(&mat, lin, col);
    preenche(mat, lin, col);
//    imprime(mat, lin, col);

    if (quadradomagico(mat, lin, col)) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    // Liberar a memória alocada para a matriz
    for (int i = 0; i < lin; i++) {
        free(mat[i]);
    }
    free(mat);
    mat = NULL;

    return 0;
}

int quadradomagico(int **mat, int lin, int col) {
    int sump = 0;
    int sums = 0;
    int suml[lin];
    int sumc[col];

    for (int i = 0; i < lin; i++) {
        suml[i] = 0;
    }
    for (int j = 0; j < col; j++) {
        sumc[j] = 0;
    }

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            suml[i] += mat[i][j];
            sumc[j] += mat[i][j];

            if (i == j) {
                sump += mat[i][j];
            }

            if (i + j == lin - 1) {
                sums += mat[i][j];
            }
        }
    }

    int sumpad = suml[0];
    if (sump != sumpad || sums != sumpad) {
        return 0;
    }

    for (int i = 0; i < lin; i++) {
        if (suml[i] != sumpad || sumc[i] != sumpad) {
            return 0;
        }
    }

    return 1;
}

void aloca(int ***mat, int lin, int col) {
    *mat = (int **) malloc(lin * sizeof(int *));
    if (*mat == NULL) {
        printf("Erro ao alocar memória!");
        exit(1);
    }

    for (int i = 0; i < lin; i++) {
        (*mat)[i] = (int *) malloc(col * sizeof(int));
        if ((*mat)[i] == NULL) {
            printf("Erro ao alocar memória!");
            exit(1);
        }
    }
}

void preenche(int **mat, int lin, int col) {
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

