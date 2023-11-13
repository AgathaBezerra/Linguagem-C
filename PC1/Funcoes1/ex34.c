//34. Escreva um programa em C para exibir n termos de números 
//naturais ao quadrado e sua soma.

#include <stdio.h>

int termos_quadrado (int n) {
    int quadrado;
    quadrado = n * n;
    return quadrado;
}

int termos_soma (int n) {
    int soma;
    soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += termos_quadrado(i);
    }
    return soma;
}

int main () {
    int n, vetor_n[n];

    printf("Quantos numeros serao exibidos? ");
    scanf("%d", &n);

    printf("Informe os termos escolhidos: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &vetor_n[i]);
    }

    termos_soma(n);

    printf("A soma dos quadrados dos numeros informados: %d", termos_soma(n));

    return 0;

}