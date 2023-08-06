#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    // Verifica se A é maior que B
    if (a > b) {
        printf("A > B: 1\n");
    } else {
        printf("A > B: 0\n");
    }
    
    // Verifica se A é par
    if (a % 2 == 0) {
        printf("A eh par: 1\n");
    } else {
        printf("A eh par: 0\n");
    }
    
    // Verifica se B não é múltiplo de 3
    if (b % 3 != 0) {
        printf("B NAO eh multiplo de 3: 1\n");
    } else {
        printf("B NAO eh multiplo de 3: 0\n");
    }
    
    // Verifica se A é maior que B e A é par
    if (a > b && a % 2 == 0) {
        printf("A > B e A eh par: 1\n");
    } else {
        printf("A > B e A eh par: 0\n");
    }
    
    // Verifica se A é maior que B ou A é par
    if (a > b || a % 2 == 0) {
        printf("A > B ou A eh par: 1\n");
    } else {
        printf("A > B ou A eh par: 0\n");
    }
    
    return 0;
}
