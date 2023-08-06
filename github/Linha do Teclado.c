#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool nalinha(char *palavra, char *lin);

int main()
{
    char lin1[] = "qwertyuiop";
    char lin2[] = "asdfghjkl";
    char lin3[] = "zxcvbnm";

    // printf("Digite uma palavra: ");

    char palavra[100];
    while (scanf("%s", palavra) != EOF)
    {
        bool nalinha1 = nalinha(palavra, lin1);
        bool nalinha2 = nalinha(palavra, lin2);
        bool nalinha3 = nalinha(palavra, lin3);

        if (nalinha1 || nalinha2 || nalinha3)
        {
            printf("%s\n", palavra);
        }

    }

    return 0;
}


bool nalinha(char *palavra, char *lin)
{
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        char c = tolower(palavra[i]);
        bool encontrou = false;

        for (int j = 0; lin[j] != '\0'; j++)
        {
            if (c == lin[j])
            {
                encontrou = true;
                break;
            }
        }

        if (!encontrou)
        {
            return false;
        }
    }

    return true;
}

