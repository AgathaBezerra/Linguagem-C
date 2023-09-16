//receba 50 idades, calcule e mostre a soma dessas idades.

#include <stdio.h> 

int main () {

    int vetor[50];
    int soma, i;

    printf("Informe o valor das 50 idades: ");

    for (i = 0; i < 50; i++) {
        scanf("%d", &vetor[i]);
    }

    soma = 0;

    for (i = 0; i < 50; i++) {
        soma = soma + vetor[i];
    }

    printf("SOMA = %d", soma);

    return 0;

}