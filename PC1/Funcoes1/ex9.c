 //Faça um programa que calcule a raiz cúbica de um número.

 #include <stdio.h>
#include <math.h>

 void raiz_cubica (float numero, float *raiz) {
    *raiz = pow(numero, 1.0/3.0);
 }

 int main () {

    float numero, raiz;

    printf("Informe um numero: ");
    scanf("%f", &numero);

    raiz_cubica (numero, &raiz);

    printf("A raiz cubica do numero: %f", raiz);

    return 0;

 }