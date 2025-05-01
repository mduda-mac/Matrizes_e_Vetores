#include <stdio.h>
int main(){
    int valor[5];
    int i,soma=0;
    float media;

    printf("Digite 5 valores inteiros:\n");
    for(i=0;i<5;i++){
    printf("Digite o %d numero: ", i + 1);
    scanf("%d",&valor[i]);
    soma += valor[i];
    }
    media=soma/5.0;
    printf("Os numeros digitados foram: ");
    for (int i=0; i< 5; i++){
    printf("%d ", valor[i]);
    }
    printf("\nA média: %.2f\n",media);

    return 0;    
}