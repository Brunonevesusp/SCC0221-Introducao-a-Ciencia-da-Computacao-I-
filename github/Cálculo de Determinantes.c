#include <stdio.h>

int Det(int matriz[][10], int n);
int Submat(int matriz[][10], int n, int linha, int coluna);

int main() {
    int n;
    scanf("%d", &n);

    int matriz[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int determinante = Det(matriz, n);

    printf("%d\n", determinante);

    return 0;
}

int Det(int matriz[][10], int n) {
    int determinante = 0;

    if (n == 1) {
        determinante = matriz[0][0];
    } else {
        int sinal = 1;
        for (int j = 0; j < n; j++) {
            int subDet = Submat(matriz, n, 0, j);
            determinante += sinal * matriz[0][j] * subDet;
            sinal *= -1;
        }
    }

    return determinante;
}

int Submat(int matriz[][10], int n, int lin, int col) {
    int submat[10][10];
    int subTam = n - 1;

    int linSub = 0;
    for (int i = 0; i < n; i++) {
        if (i == lin) {
            continue;
        }

        int colSub = 0;
        for (int j = 0; j < n; j++) {
            if (j == col) {
                continue;
            }

            submat[linSub][colSub] = matriz[i][j];
            colSub++;
        }

        linSub++;
    }

    int subDet = Det(submat, subTam);
    return subDet;
}
