#include <stdio.h>

int main() {
    int n;
    float vA, vB, t, dA, dB;

    // Leitura da quantidade de corridas
    scanf("%d", &n);

    // Loop para processar cada corrida 
    for (int i = 1; i <= n; i++) {
        // Leitura das informações da corrida
        scanf("%f %f %f", &vA, &vB, &t);

        // Cálculo das distâncias percorridas por cada kart
        dA = vA * t;
        dB = vB * t;

        // verificando se o tempo é igual a 0 ou negativo
        if(t == 0){
           printf("A corrida ainda nao comecou\n" );
          
           // verificando se há desistencias
        }else if ((dA==0) && (dB==0 )){
           printf("Os dois pilotos nao querem competir\n"); 
        }else if (dA == 0){
           printf("O piloto A desistiu inesperadamente\n");
        } else if( dB == 0){
           printf("O piloto B desistiu inesperadamente\n");
        } 
           
        else if (t < 0){
            printf("De alguma forma os pilotos voltaram no tempo\n");
           
        // Verificação do vencedor da corrida
        } else if (dA == dB ){
            printf("Os karts empataram, percorrendo cada %.2fkm\n", dA);
        } else if (dA > dB){
            printf("O Kart A venceu e percorreu %.2fkm a mais que o kart B\n", dA - dB);
        } else if (dB > dA){
            printf("O Kart B venceu e percorreu %.2fkm a mais que o kart A\n", dB - dA);
        }  
    }

    return 0;
}

