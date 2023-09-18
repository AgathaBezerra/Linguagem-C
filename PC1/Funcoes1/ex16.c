//Leia um ângulo em graus e apresente-o convertido em radianos. 
//A fórmula de conversão é R = G * π /180, sendo G o ângulo em graus e R em radianos e π = 3.141592.


#include <stdio.h>
#define PI 3.141592

void converter_graus (float ang_graus, float *ang_radianos) {
    *ang_radianos = (ang_graus * PI) / 180.00;

}

int main () {
    float ang_graus, ang_radianos;

    printf("Informe o angulo em graus: ");
    scanf("%f", &ang_graus);

    converter_graus (ang_graus, &ang_radianos);

    printf("Angulo em radianos: %f", ang_radianos);

    return 0;
}