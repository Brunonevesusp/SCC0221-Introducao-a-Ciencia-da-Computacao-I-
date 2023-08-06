#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ITENS 100

int comparacaostr(const char *str1, const char *str2);
int cmpstr(const void *a, const void *b);


int main()
{
    char *itens[MAX_ITENS];
    int num_itens = 0;
    char array[100];
    int cont = 0;


    while (1)
    {
        scanf("%s", array);
        
        if (strcmp(array, "sair") == 0)
            break;

        itens[num_itens] = malloc((strlen(array) + 1) * sizeof(char));
        strcpy(itens[num_itens], array);
        num_itens++;
    }
    
    qsort(itens, num_itens, sizeof(char *), cmpstr);

    
   
    for (int i = 0; i < num_itens; i++)
    {
        cont++;
        printf("%d) %s\n", cont, itens[i]);
        free(itens[i]);
    }



    return 0;
}


int cmpstr(const void *a, const void *b)
{
    const char *str1 = *(const char **)a;
    const char *str2 = *(const char **)b;
    return strcmp(str1, str2);
}
