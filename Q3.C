#include <stdio.h>
int main() {
    int vetor[8];
    int i, x, y, soma;

    printf("Digite 8 valores inteiros para o vetor:\n");
    for(i = 0; i < 8; i++) {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite dois valores (entre 0 e 7):\n");
    printf("Índice X: ");
    scanf("%d", &x);
    printf("Índice Y: ");
    scanf("%d", &y);

    if(x < 0 || x > 7 || y < 0 || y > 7) {
        printf("Valores inválidos.\n");
    } else {
        soma = vetor[x] + vetor[y];
        printf("A soma dos valores  %d e %d: %d\n", x, y, soma);
    }

    return 0;
}
