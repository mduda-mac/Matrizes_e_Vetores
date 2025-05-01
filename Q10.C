#include <stdio.h>
int main() {
    int matriz[5][5];
    int i, j, soma = 0;

    printf("Digite os valores da matriz 5x5:\n");
    for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
    scanf("%d", &matriz[i][j]);
    }
    }
    for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
     if(i != j && i + j != 4) {
    soma += matriz[i][j];
    }
    }
    }
    printf("Soma dos elementos fora das diagonais: %d\n", soma);

    return 0;
}
