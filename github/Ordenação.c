#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    
   // printf("Digite o número de elementos: ");
    scanf("%d", &N);
    
    int sequence[N];
    
    // printf("Digite a sequência de números: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &sequence[i]);
    }
    
    bubbleSort(sequence, N);
    
    // printf("\nSequência ordenada de forma crescente: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", sequence[i]);
    }
    printf("\n");
    
    return 0;
}
