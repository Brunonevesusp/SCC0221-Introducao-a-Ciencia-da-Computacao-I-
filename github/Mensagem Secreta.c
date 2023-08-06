#include <stdio.h>

int main() {
    int num;
    char byte1, byte2, byte3, byte4;

   
    scanf("%d", &num);

    byte1 = (num >> 24) & 0xFF; // byte mais significativo
    byte2 = (num >> 16) & 0xFF; // segundo byte mais significativo
    byte3 = (num >> 8) & 0xFF; // terceiro byte mais significativo
    byte4 = num & 0xFF; // byte menos significativo

    printf("%c%c%c%c\n", byte1, byte2, byte3, byte4);

    return 0;
}
