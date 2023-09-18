// Faça um programa que leia três valores inteiros e mostre sua soma.

#include <stdio.h>

void soma_numero (int vet[], int *soma) {
    int i;
    *soma = 0;
    for (i = 0; i < 3; i++) {
    *soma = *soma + vet[i];
    }
}

int main () {
    int vet[3], soma;
    int i;

    printf("Infome tres valores: ");

    for (i = 0; i < 3; i++) {
        scanf("%d", &vet[i]);
    }

    soma_numero (vet, &soma);

    printf("SOMA = %d", soma);

    return 0;
}