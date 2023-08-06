#include <stdio.h>
#include <math.h>

int main() {
  float num1, num2, num3, media_aritmetica, media_harmonica, media_geometrica;

  scanf("%f", &num1);

  scanf("%f", &num2);

  scanf("%f", &num3);

  media_aritmetica = (num1 + num2 + num3) / 3;
  media_harmonica = 3 / ((1 / num1) + (1 / num2) + (1 / num3));
  media_geometrica = cbrt(num1 * num2 * num3);

  printf("Media aritmetica: %.4f\n", media_aritmetica);
  printf("Media harmonica: %.4f\n", media_harmonica);
  printf("Media geometrica: %.4f\n", media_geometrica);

  return 0;
}
