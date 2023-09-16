//Faça um algoritmo que preencha dois vetores, X e Y, com 20 números cada. Calcule
//e mostre o vetor resultante Z a partir da soma de X e Y.

#include <stdio.h>

int main () {

    int X[10], Y[10], Z[10];
    int i;

    printf("Informe os valores do primeiro vetor: ");

    for (i = 0; i < 10; i++) {
        scanf("%d", &X[i]);
    }

    printf("\nInforme os valores do segundo vetor: \n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &Y[i]);
    }

    printf("\nA soma dos dois vetores: \n");

    for (i = 0; i < 10; i++){
        Z[i] = X[i] + Y[i];
      
    }

    for ( i = 0; i < 10; i++){
        printf("%d\n", &Z[i]);
    }

    return 0;
}