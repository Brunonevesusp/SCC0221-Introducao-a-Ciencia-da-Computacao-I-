#include <stdio.h>
#include <stdlib.h>


int main(){

int tam;
int *vet[];


scanf("%d", &tam);

 int vet = (int) malloc(tam * sizeof(int));

for (int i = 0; i < tam; i++)
{
    scanf("%d", vet[i]);
}
for (int i = 0; i < tam; i++)
{
 printf("%d", vet[i]);
}


}