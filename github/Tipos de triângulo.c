#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            printf("EQUILATERO\n");
        } else if (a == b || b == c || a == c) {
            printf("ISOSCELES\n");
        } else {
            printf("ESCALENO\n");
        }
    } else {
        printf("INVALIDO\n");
    }

    return 0;
}
