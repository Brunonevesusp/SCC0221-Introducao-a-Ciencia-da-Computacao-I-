#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int ehletra(char c);
char maisc(char c);

void contfreq(int *freq, char c)
{
    if (ehletra(c))
    {
        c = maisc(c);
        freq[c - 'a']++;
    }
}

void imprimefreq(int *freq)
{
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            char c = i + 'a';
            printf("%c: %d\n", c, freq[i]);
        }
    }
}

int main()
{
    int freq[26] = {0};
    char c;

    while ((c = getchar()) != EOF)
    {
        contfreq(freq, c);
    }

    imprimefreq(freq);

    return 0;
}

int ehletra(char c)
{
    return isalpha(c) != 0;
}

char maisc(char c)
{
    return tolower(c);
}
