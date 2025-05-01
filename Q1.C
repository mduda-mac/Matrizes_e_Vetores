#include <stdio.h>
int main(){
    int numeros[6];
    int i;

    printf("Digite seis números inteiros:\n");
    for(i=0;i<6;i++){
        printf("numero %d:", i+1);
        scanf("%d",&numeros [i]);
    }
    printf("Esses são os números que foram digitados:\n");
    for(i=0;i<6;i++){
    printf("%d",numeros [i]);
    }
    return 0;
}