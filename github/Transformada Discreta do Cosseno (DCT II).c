#include <stdio.h>
#include <math.h>

int main()
{
    int tamanho, cont = 0;
    scanf("%d", &tamanho);
    double vet[tamanho], tcos;
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%lf", &vet[i]);
    }
    for (int i = 0; i < tamanho; i++)
    {
        tcos = 0;
        for (int i1 = 0; i1 < tamanho; i1++)
        {
            tcos += vet[i1] * (cos((M_PI / tamanho) * (i1 + 1 / 2.0) * cont));
        }
        printf("%.4lf\n", tcos);
        cont++;
    }
    return 0;
}