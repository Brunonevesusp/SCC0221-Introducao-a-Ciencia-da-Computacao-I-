#include <stdio.h>

int main() {
  // Create a string
  char PrimeiroNome[30];

  // Ask the user to input some text (name)
  // printf("Digite seu primeiro nome: \n");

  // Get and save the text
  scanf("%s", PrimeiroNome);

  // Output the text
  printf("Bom dia, %s!", PrimeiroNome);
  
  return 0;
}

