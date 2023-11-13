//33. Escreva um programa em C para encontrar a soma dos 10 primeiros 
//números naturais.

#include <stdio.h>

int soma (int vetor []) {
    int i;
    int soma;

    soma = 0;

    for (i = 1; i <= 10; i++) {
        soma = soma + vetor[i];
    }

    return soma;
}

int main () {
    int vetor[10], calcular_soma;
    int i;

    for (i = 1; i <= 10; i++) {
        vetor[i] = i;
    }

    calcular_soma = soma(vetor);

    printf("A soma dos 10 primeiros numeros eh: %.2d", calcular_soma);

    return 0;
}