#include <stdio.h>

int ehPrimo(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int proximoPrimo(int num) {
    int proximo = num + 1;

    while (1) {
        if (ehPrimo(proximo)) {
            return proximo;
        }
        proximo++;
    }
}

int main() {
    int n;
   // printf("Digite a quantidade de números: ");
    scanf("%d", &n);

    int numeros[n];
    for (int i = 0; i < n; i++) {
       // printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);

     if (ehPrimo(numeros[i])) {
printf("%d eh primo.\n", numeros[i]);
        } else {
            printf("%d nao eh primo, o proximo primo eh %d.\n", numeros[i], proximoPrimo(numeros[i]));
        }
    }

    return 0;
}
