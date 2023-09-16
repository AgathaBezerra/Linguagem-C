//Faça um programa que calcule o tempo de viagem de um carro. 
//Pergunte a distância a percorrer e a velocidade média esperada durante a viagem. Usar km e horas.

#include <stdio.h>

void tempo_viagem (float dist_percorrida, float velocidade_media, float *tempo) {
    *tempo = dist_percorrida / velocidade_media;
}

int main () {
    float dist_percorrida, velocidade_media;
    float tempo;

    printf("Informe a distancia percorrida (em km): ");
    scanf("%f", &dist_percorrida);

    printf("Informe a velocidade media (em horas): ");
    scanf("%f", &velocidade_media);

    tempo_viagem (dist_percorrida, velocidade_media, &tempo);

    printf("Tempo de viagem: %.2f", tempo);

    return 0;

}