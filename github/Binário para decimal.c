#include <stdio.h>
#include <math.h>

int main() {
    int numBinario, numDecimal = 0;
    int posicao = 0;

    // Leitura do número binário
    
    scanf("%d", &numBinario);

    // Conversão do número binário para decimal
    while (numBinario > 0) {
        int digito = numBinario % 10;
        numDecimal += digito * pow(2, posicao);
        numBinario /= 10;
        posicao++;
    }

    // Exibição do número decimal
    printf("%d\n", numDecimal);

    return 0;
}
