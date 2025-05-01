#include <stdio.h>
int main() {
    float vetor[10];
    int i, negativos = 0;
    float soma_positivos = 0;

    printf("Digite 10 números reais:\n");
    for(i = 0; i < 10; i++) {
    printf("vetor[%d]: ", i);
    scanf("%f", &vetor[i]);
    if(vetor[i] < 0) {
    negativos++;
    } else {
    soma_positivos += vetor[i];
    }
    }
    printf("\nQuantidade de números negativos: %d\n", negativos);
    printf("Soma dos números positivos: %.2f\n", soma_positivos);

    return 0;
}
