#include <stdio.h>

int main()

{
    
    int num, cont = 1, cnum;
    
    scanf("%d", &num);
    cnum = num;
    
    for (int i = 1; i<= num; i++)
    {
        
        while(cont < cnum)
        {
            
            printf(" ");
            cont++;
        }
        cont = 1;
        cnum--;
        for(int i2 = 1; i2 <= 2*i; i2++)
        {
            
        printf("*");
        }
        printf("\n");
    
        
    }
    return 0;
}