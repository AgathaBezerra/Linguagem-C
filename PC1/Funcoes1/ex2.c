//2 - Faça um programa que leia a quantidade de horas, minutos e segundos. Converta o total para segundos.

#include <stdio.h>

void converter_segundos (int horas, int minutos, int segundos, int *segundos_totais ) {
    *segundos_totais = (horas * 3600) + (minutos * 60) + (segundos * 1);
}

int main () {
    int horas, minutos, segundos, segundos_totais;

    printf("Informe as horas: ");
    scanf("%d", &horas);

    printf("Informe os minutos: ");
    scanf("%d", &minutos);

    printf("Informe os segundos: ");
    scanf("%d", &segundos);

    converter_segundos (horas, minutos, segundos, &segundos_totais);

    printf("Em segundos = %d\n", segundos_totais);

}