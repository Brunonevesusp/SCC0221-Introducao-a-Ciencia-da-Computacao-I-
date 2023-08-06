#include <stdio.h>

int main(void)
{
    int i = 0, ch = 1, line = 1;
    char array[10000];

    while(scanf("%c", &array[i]) != EOF){
        if(array[i] != '\n'){
            switch (array[i])
            {
            case 'a' ... 'z':
                array[i] = 'a' + ((array[i] + ch) * line) % 26;
                break;
            case 'A' ... 'Z':
                array[i] = 'A' + ((array[i] + ch) * line) % 26;
            default:
                break;
            }
        }
        else if(array[i] == '\n'){
            line++;
            ch = 0;
        }
        ch++;
        i++;
    }
    printf("%s",array);
}
