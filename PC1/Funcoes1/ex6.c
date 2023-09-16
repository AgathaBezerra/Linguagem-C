//Faça um programa que pergunte a quantidade de km percorridos por um carro alugado pelo usuário, 
//assim como a quantidade de dias pelos quais o carro foi alugado. 
//Calcule o preço a pagar, sabendo que o carro custa R$ 60,00 por dia e R$ 0,15 por km rodado.

#include <stdio.h>

void calcular_carro (float dist_percorrida, int dias_alugados, float *alugar_dias, float *alugar_km, float *preco) {

    *alugar_dias = 60.00 * dias_alugados;

    *alugar_km = 0.15 * dist_percorrida;

    *preco = *alugar_dias + *alugar_km;

}

int main () {
    float dist_percorrida, alugar_dias, alugar_km, preco;
    int dias_alugados;

    printf("Informe a quantidade de km percorridos: ");
    scanf("%f", &dist_percorrida);

    printf("Informe os dias alugados: ");
    scanf("%d", &dias_alugados);

    calcular_carro (dist_percorrida, dias_alugados, &alugar_dias, &alugar_km, &preco);

    printf("Preco a pagar = %f", preco);

    return 0;
}