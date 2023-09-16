//receba 100 notas, calcule mostre a média dessas notas.

#include <stdio.h>

int main () {

    float vetor[10];
    float media;
    int i, soma;

    printf("Informe as 10 notas: ");

    for( i = 0; i < 10; i++){
        scanf("%f", &vetor[i]);
    }

    soma = 0;

    for (i = 0; i < 10; i++) {
        soma = soma + vetor[i];
    }

    media = soma / 10.0;

    printf("Media = %f\n", media);

    return 0;
}