#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float primeiroTermo, razao;

    //printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    //printf("Digite o primeiro termo: ");
    scanf("%f  ", &primeiroTermo );

    //printf("Digite a razao: ");
     scanf("%f", &razao);

    printf("PA: ");
    for (int i = 0; i < n; i++) {
        float termo = primeiroTermo + (i * razao);
        printf("%.3f ", termo);
    }

    printf("\nPG: ");
    for (int i = 0; i < n; i++) {
        float termo = primeiroTermo * pow(razao, i);
        printf("%.3f ", termo);
    }

    printf("\n");

    return 0;
}
