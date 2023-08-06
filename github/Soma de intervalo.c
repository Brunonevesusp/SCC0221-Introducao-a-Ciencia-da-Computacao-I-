#include <stdio.h>

int calculateSum(int* array, int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int N;
    
   // printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);
    
    int array[N];
    
    //printf("Digite os elementos do vetor: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    
    int a, b;
    
    //printf("Digite os valores de a e b (0 <= a <= b < N): ");
    scanf("%d %d", &a, &b);
    
    int sum = calculateSum(array, a, b);
    
    printf("%d\n", sum);
    
    return 0;
}
