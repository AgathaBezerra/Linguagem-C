//receba 50 idades, calcule e mostre quantas idades estão acima de 30 anos.

#include <stdio.h>

int main () {

    int vetor[10];
    int i, contador;

    printf("Informe 10 idades: ");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    contador = 0;

    for ( i = 0; i < 10; i++) {
        if (vetor[i] < 30){
            contador = contador + 1;
        }
    }

    printf("Acima de 30 anos = %d\n", contador);

    return 0;
}