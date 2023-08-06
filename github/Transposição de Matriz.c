#include <stdio.h>
#include <stdlib.h>

void aloca(int ***mat, int lin, int col);
void preenc(int **mat, int lin, int col);
void imprime(int **mat, int lin, int col, int transp[100][100]);

int main()
{
    int **mat;   // Ponteiro duplo para representar a matriz
    int lin;     
    int col;    
    int transp[100][100];

    scanf("%d", &lin); 
    scanf("%d", &col); 

    aloca(&mat, lin, col);
    preenc(mat, lin, col);
    imprime(mat, lin, col, transp);

    for (int i = 0; i < lin; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
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

void preenc(int **mat, int lin, int col) {
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void imprime(int **mat, int lin, int col, int transp[100][100]) {
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < lin; j++) {
            transp[i][j] = mat[j][i];
        }
    }

    // printf("Matriz Transposta:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < lin; j++) {
            printf("%2d ", transp[i][j]);
          //  printf(" "); // Adicionar espaço entre as colunas
        }
        printf("\n");
    }
}
