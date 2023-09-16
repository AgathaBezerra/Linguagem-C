//preencha um vetor com 100 números e mostre o maior número.

#include <stdio.h>

int main () {

    int vetor[10];
    int maior, i;

    printf("Informe os 10 valores: ");

    for( i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = 1;

    for ( i = 0; i < 10; i++){
        maior = maior + vetor[i];
    }

    printf("MAIOR = %d", maior);



    return 0;
}