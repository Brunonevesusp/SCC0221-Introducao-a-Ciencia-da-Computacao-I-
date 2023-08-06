#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    // Operações bit-a-bit
    int and_op = A & B;
    int or_op = A | B;
    int xor_op = A ^ B;
    int not_op = ~A;
    int shift_right_op = A >> 2;
    int shift_left_op = B << 1;

    // Imprimir resultados
    printf("A and B: %d\n", and_op);
    printf("A or B: %d\n", or_op);
    printf("A xor B: %d\n", xor_op);
    printf("not A: %d\n", not_op);
    printf("A right shift 2: %d\n", shift_right_op);
    printf("B left shift 1: %d\n", shift_left_op);

    return 0;
}
