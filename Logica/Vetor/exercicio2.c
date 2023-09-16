//receba 50 idades e mostre as idades acima de 30 anos.

#include <stdio.h>

int main () {

    int vetor[10];
    int i;

    printf("Informe as 10 idades: ");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nIdades maiores que 30 anos: \n");

    for (i = 0; i < 10; i++) {
        if (vetor[i] > 30) {
            printf("%d\n", vetor[i]);
        }
    }


    return 0;
}