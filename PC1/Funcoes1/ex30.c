//30. Faça um programa que pergunte a quantidade de km percorridos 
//por um carro alugado pelo usuário, assim como a quantidade de dias 
//pelos quais o carro foi alugado. Calcule o preço a pagar, sabendo que 
//a diária do carro custa R$ 60,00 por dia e R$ 0,15 por km rodado.

#include <stdio.h>


float percorrido (float *km, int *dias) {
    float preco;

    preco = (*km * 0.15) + (*dias * 60);

    return preco;
}

int main () {
    float km, preco_percorrido;
    int dias;

    printf("Qual a quantidade de km percorridos pelo usuario? ");
    scanf("%f", &km);

    printf("Por quantos dias o carro foi alugado? ");
    scanf("%d", &dias);

    preco_percorrido = percorrido (&km, &dias);

    printf("Valor a ser cobrado: %.2f", preco_percorrido);

    return 0;

}