#include <stdio.h>

#define NUM_FACES 6

int main() {
    int rolls[NUM_FACES] = {0}; // Array para contar as ocorrências de cada face
    int face;
    
    // printf("Digite as faces exibidas pelo dado (Ctrl+D para encerrar):\n");
    
    // Lendo as faces exibidas pelo dado
    while (scanf("%d", &face) != EOF) {
        if (face >= 1 && face <= NUM_FACES) {
            rolls[face - 1]++; // Incrementando o contador da face
        }
    }
    
    // Encontrando a face mais frequente
    int maxCount = rolls[0];
    for (int i = 1; i < NUM_FACES; i++) {
        if (rolls[i] > maxCount) {
            maxCount = rolls[i];
        }
    }
    
    // Imprimindo as faces mais frequentes
    // printf("\nFaces mais frequentes:\n");
    for (int i = 0; i < NUM_FACES; i++) {
        if (rolls[i] == maxCount) {
            printf("%d\n", i + 1); // Imprime o número da face (índice + 1)
        }
    }
    
    // Imprimindo o número de aparições da face mais frequente
    printf("%d\n", maxCount);
    
    return 0;
}
