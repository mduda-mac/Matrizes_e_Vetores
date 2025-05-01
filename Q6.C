#include <stdio.h>
int main() {
    int matriz[3][3];
    int menor, i, j;

    printf("Digite os valores da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
    scanf("%d", &matriz[i][j]);
    if(i == 0 && j == 0 || matriz[i][j] < menor)
    menor = matriz[i][j];
    }
    }
    printf("Menor valor da matriz: %d\n", menor);
    
    return 0;
}
