// Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.


#include <stdio.h>

void valor_dolar (float reais, float dolar, float *valor) {
    *valor = reais / dolar;

}

int main () {
    float reais, dolar, valor;

    printf("Informe o valor em reais: ");
    scanf("%f", &reais);

    printf("Qual a cotacao do dolar? ");
    scanf("%f", &dolar);

    valor_dolar (reais, dolar, &valor);

    printf("VALOR EM DOLAR = %.2f", valor);

    return 0;
}