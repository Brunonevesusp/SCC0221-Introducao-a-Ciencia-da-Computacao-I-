#include <stdio.h>
#include <stdlib.h>

void imprim(int matriz[][100], int n, int m);
void multip(int mat1[][100], int n1, int m1, int mat2[][100], int n2, int m2, int resultado[][100]);


int main() {
    int n1, m1, n2, m2;

    scanf("%d %d %d %d", &n1, &m1, &n2, &m2);

    int mat1[100][100];
    int mat2[100][100];
    int resultado[100][100];

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    multip(mat1, n1, m1, mat2, n2, m2, resultado);

    imprim(resultado, n1, m2);

    return 0;
}

void multip(int mat1[][100], int n1, int m1, int mat2[][100], int n2, int m2, int resultado[][100]) {
    if (m1 != n2) {
        printf("Impossível multiplicar matrizes com essas dimensões.\n");
        exit(1);
    }
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < m1; k++) {
                resultado[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void imprim(int matriz[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}