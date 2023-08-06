#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, x;
    double y;

    // Leitura dos valores a, b, c e x
//    printf("Digite o valor de a: ");
    scanf("%d", &a);

//    printf("Digite o valor de b: ");
    scanf("%d", &b);

  //  printf("Digite o valor de c: ");
    scanf("%d", &c);

    //printf("Digite o valor de x: ");
    scanf("%d", &x);

    // Cálculo da equação do segundo grau
    y = (a * pow(x, 2)) + (b * x) + c;

    // Exibição do resultado
    printf("%.f\n", y);

    return 0;
}
