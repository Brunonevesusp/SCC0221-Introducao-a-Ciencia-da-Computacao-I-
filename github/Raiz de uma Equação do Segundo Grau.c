#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double delta, x1, x2;

    scanf("%d %d %d", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;

    if(delta < 0) {
        printf("NAO EXISTE RAIZ REAL\n");
    } else if(delta == 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        printf("%.3lf\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        if(x1 < x2) {
            printf("%.3lf %.3lf\n", x1, x2);
        } else {
            printf("%.3lf %.3lf\n", x2, x1);
        }
    }

    return 0;
}
