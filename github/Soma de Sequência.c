#include <stdio.h>

int main() {
    int n, i;
    double soma = 0.0;
    
    // printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            soma -= 1.0 / i;
        } else {
            soma += 1.0 / i;
        }
    }
    
    printf("%.4lf\n", soma);
    
    return 0;
}

