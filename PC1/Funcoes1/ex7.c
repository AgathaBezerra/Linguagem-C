//Escreva um programa que imprima o perímetro a área de um 
//retângulo após receber sua altura e largura como entrada.

#include <stdio.h>

void calculo_triangulo (float altura, float largura, float *perimetro, float *area) {

    *perimetro = largura * largura * largura;
    *area = largura * altura / 2;

}

int main () {
    float altura, largura, perimetro, area;

    printf("Informe a altura do triangulo: ");
    scanf("%f", &altura);

    printf("Informe a largura do triagulo: ");
    scanf("%f", &largura);

    calculo_triangulo (altura, largura, &perimetro, &area);

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f", area);

    return 0;
}