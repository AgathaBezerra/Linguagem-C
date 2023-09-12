//1 - Faça um programa que leia um valor em metros e o converta para milímetros.


#include <stdio.h>

void converter_milimetros (float metros, float *milimetros) {
    *milimetros = metros * 1000.00;
}

int main () {
    float metros, milimetros;

    printf("Informe o valor em metros: ");
    scanf("%f", &metros);

    converter_milimetros (metros, &milimetros);

    printf("O valor em milimetros = %.2f\n", milimetros);

    return 0;

}
