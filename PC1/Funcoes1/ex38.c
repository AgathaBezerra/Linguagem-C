//38. Faça um programa que leia dois números e multiplique o primeiro 
//pelo segundo. Utilize apenas operações de soma e subtração.

#include <stdio.h>

int calcular_multiplicacao (int num1, int num2) {
    int multi;
    int i;
    
    multi = 0;

    for (i = 0; i < num2; i++) {
        multi += num1;
    }

    return multi;
}

int main () {
    int num1, num2, calculo;

    printf("Informe dois numeros: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    calculo = calcular_multiplicacao(num1, num2);

    printf("A multiplicacao dos numeros eh: %d", calculo);

    return 0;
}