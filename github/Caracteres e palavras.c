#include <stdio.h>

int main() {
    int num_caracteres = 0;
    int num_palavras = 0;
    int num_linhas = 0;

    int caractere;
    int dentro_palavra = 0;
    // int dentro_linha = 0;

    while ((caractere = getchar()) != EOF) {
        if (caractere != ' ' && caractere != '\n' && caractere != '\r') {
            num_caracteres++;

            if (!dentro_palavra) {
                dentro_palavra = 1;
                num_palavras++;
            }
        } else {
            dentro_palavra = 0;
        }

        // if (caractere == '\n') {
           // dentro_linha = 0;
            //num_linhas++;
        // } else if (!dentro_linha) {
           // dentro_linha = 1;
            // num_linhas++;
       // }
    
         if (caractere == '\n') { // Se o caractere é uma quebra de linha, aumenta o contador de linhas
           num_linhas++;
        }
        
    }
              num_linhas++;
    
    
    
    
    

    printf("Caracteres: %d\n", num_caracteres);
    printf("Palavras: %d\n", num_palavras);
    printf("Linhas: %d\n", num_linhas);

    return 0;
}
