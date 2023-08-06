#include <stdio.h>

int main() {
    int n, i, j, count;
    // printf("Digite um número natural maior que 1: ");
    scanf("%d", &n);

    // printf("Fatores primos:\n");

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            count = 0;
            for (j = 2; j <= i/2; j++) {
                if (i % j == 0) {
                    count++;
                    break;
                }
            }
            if (count == 0) {
                int multiplicidade = 0;
                while (n % i == 0) {
                    multiplicidade++;
                    n /= i;
                }
                printf("%d %d\n", i, multiplicidade);
            }
        }
    }

    return 0;
}
