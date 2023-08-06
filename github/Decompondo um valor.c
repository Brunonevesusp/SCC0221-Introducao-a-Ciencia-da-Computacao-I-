#include <stdio.h>

int main() {
    int valor;
    scanf("%d", &valor);
    
    int notas_100 = valor / 100;
    valor = valor % 100;
    
    int notas_50 = valor / 50;
    valor = valor % 50;
    
    int notas_20 = valor / 20;
    valor = valor % 20;
    
    int notas_10 = valor / 10;
    valor = valor % 10;
    
    int notas_5 = valor / 5;
    valor = valor % 5;
    
    int notas_2 = valor / 2;
    valor = valor % 2;
    
    int moedas_1 = valor;
    
    printf("%d nota(s) de R$ 100\n", notas_100);
    printf("%d nota(s) de R$ 50\n", notas_50);
    printf("%d nota(s) de R$ 20\n", notas_20);
    printf("%d nota(s) de R$ 10\n", notas_10);
    printf("%d nota(s) de R$ 5\n", notas_5);
    printf("%d nota(s) de R$ 2\n", notas_2);
    printf("%d moeda(s) de R$ 1\n", moedas_1);
    
    return 0;
}
