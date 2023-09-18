//Faça um programa que leia um número real e imprima a quinta parte desse número.

#include <stdio.h>


void quinta_parte (int numero, int *quinta) {

    *quinta = numero / 5.00;
}


int main () {
    int numero, quinta;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    quinta_parte(numero, &quinta);

    printf("A quinta parte do numero: %d", quinta);

    return 0;
}