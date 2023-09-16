//Faça um programa que solicite o preço de uma mercadoria e o percentual de desconto. 
//Exiba o valor do desconto e o preço a pagar.

#include <stdio.h>

void mercadoria (float preco_mercadoria, float percentual, float *valor_desconto, float *valor_final) {
    *valor_desconto = (preco_mercadoria * percentual / 100);
    *valor_final = preco_mercadoria - *valor_desconto;
}

int main () {
    float preco_mercadoria, percentual;
    float valor_desconto, valor_final;

    printf("Qual o preco da mercadoria? ");
    scanf("%f", &preco_mercadoria);

    printf("Qual o percentual de desconto? ");
    scanf("%f", &percentual);

    mercadoria (preco_mercadoria, percentual, &valor_desconto, &valor_final);

    printf("Valor do desconto: %f\n", valor_desconto);
    printf("Preco da mercadoria: %f", valor_final);

    return 0;

}

