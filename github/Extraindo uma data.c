#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int ano, mes, dia;

    scanf("%*[a-z]%3x%2d%2o",&ano,&mes,&dia);

    printf("Data: %02d/%02d/%04d\n", dia, mes, ano);

    return 0;
}