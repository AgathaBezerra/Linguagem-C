//Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo).
// A fórmula de conversão é M = K/3.6, sendo K a velocidade em km/h e M em m/s.

#include <stdio.h>

void converter_velocidade (float velocidade_km, float *velocidade_ms) {
    *velocidade_ms = velocidade_km / 3.6;

}

int main () {
    float velocidade_km, velocidade_ms;

    printf("Informe a velocidade em km/h: ");
    scanf("%f", &velocidade_km);

    converter_velocidade (velocidade_km, &velocidade_ms);

    printf("A velocidade em m/s: %f", velocidade_ms);

    return 0;
}