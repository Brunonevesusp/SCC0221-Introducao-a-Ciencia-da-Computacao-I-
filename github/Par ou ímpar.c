#include <stdio.h>
#include <string.h>

int main() {
    char nome1[11]; // Nome do primeiro jogador
    char nome2[11]; // Nome do segundo jogador
    int escolha1;   // Escolha do primeiro jogador (0 para par, 1 para ímpar)
    int numPartidas; // Número de partidas
    
    // Leitura jogadores
    
    scanf("%s", nome1);
    scanf("%s", nome2);
    
    // Leitura da escolha do primeiro jogador
    scanf("%d", &escolha1);
    
    // Leitura do número de partidas
    scanf("%d", &numPartidas);
    
    // printf("\n----- Início do Jogo -----\n");
    
    for (int partida = 1; partida <= numPartidas; partida++) {
        int num1, num2;  // Números escolhidos pelos jogadores
        
        // Leitura dos números escolhidos 
        scanf("%d", &num1);
        scanf("%d", &num2);
        
        // Verificação da validade dos números escolhidos
        if (num1 == 0 && num2 == 0) {
            printf("Refazendo a rodada\n");
            partida--;
        continue;
        }
        
        // Verificação do resultado da partida
        int soma = num1 + num2;
        int resultado = soma % 2;
       
        
        if (resultado == escolha1) {
           printf("%s venceu!\n", nome1); // Primeiro jogador venceu
        } else {
            printf("%s venceu!\n", nome2);  // Segundo jogador venceu
        }
        
       }
    
   // printf("\n----- Fim do Jogo -----\n");
    
    return 0;
}
