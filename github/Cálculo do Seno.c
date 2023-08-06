#include <stdio.h>
#include <math.h>


int main() {
    
    double fatorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}

    double x, termo, seno = 0;
    int i, sinal = 1;

    
    // printf("Digite o valor do angulo em radianos: ");
    scanf("%lf", &x);

    for (i = 1; i <= 9; i += 2) {
        termo = pow(x, i) / fatorial(i); // cálculo do termo da série de Taylor
        seno += sinal * termo; // acumulação do valor do seno
        sinal *= -1; // alternância do sinal
    }

    printf("%.6lf\n", seno);

    return 0;
}
