#include <stdio.h>
int main() {
    int matriz[4][4];
    int maior, i, j;

    printf("Digite os valores da matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
    for(j = 0; j < 4; j++) {
    scanf("%d", &matriz[i][j]);
    if(i == 0 && j == 0 || matriz[i][j] > maior)
    maior = matriz[i][j];
    }
    }
    printf("Maior valor da matriz: %d\n", maior);
    
    return 0;
}