#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    double dist_euclidiana, dist_manhattan;

    // Lendo os pontos
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    // Calculando as distâncias
    dist_euclidiana = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    dist_manhattan = fabs(x2 - x1) + fabs(y2 - y1);

    // Imprimindo as distâncias com 3 casas decimais
    printf("Distancia euclidiana: %.3lf\n", dist_euclidiana);
    printf("Distancia Manhattan: %.3lf\n", dist_manhattan);

    return 0;
}

