#include <stdio.h>

void redObjt(float pontos[][2], int n, float fator);
void imprimObjt(float pontos[][2], int n);

int main() {
    int n;
    float fator;

    scanf("%d %f", &n, &fator);

    float pontos[100][2];
    for (int i = 0; i < n; i++) {
        scanf("%f %f", &pontos[i][0], &pontos[i][1]);
    }

    redObjt(pontos, n, fator);

    imprimObjt(pontos, n);

    return 0;
}

void redObjt(float pontos[][2], int n, float fator) {
    for (int i = 0; i < n; i++) {
        pontos[i][0] *= fator;
        pontos[i][1] *= fator;
    }
}

void imprimObjt(float pontos[][2], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f %.2f\n", pontos[i][0], pontos[i][1]);
    }
}
