#include <stdio.h>
int main(){
    int numeros[10];
    int pares = 0, impares = 0;
    for (int i=0; i< 10; i++)
    {
    printf("Digite o %do numero: ", i + 1);
    scanf("%d", &numeros[i]);
    if (numeros[i] % 2 == 0){
    pares++;
    }
    else{
    impares++;
    }
    }
    printf("Total de numeros pares: %d\n", pares);
    printf("Total de numeros  ́ımpares: %d\n", impares);

    return 0;
}