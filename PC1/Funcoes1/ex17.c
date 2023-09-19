//A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
//i. O primeiro ganhador receberá 48% do total.
//ii. O segundo receberá 35% do total.
//iii. O terceiro receberá o restante.
//Calcule e imprima a quantia recebida por cada um dos ganhadores.

#include <stdio.h>

void quantia_primeiro (float *primeiro, float total) {

    *primeiro = (total * 48) / 100.00;
}

void quantia_segundo (float *segundo, float total) {

    *segundo = (total * 35) / 100.00;
}

void quantia_terceiro (float *terceiro, float total) {

    *terceiro = (total * 16) / 100.00;
}

int main () {
    float primeiro, segundo, terceiro, total;

    total = 780000;

    quantia_primeiro (&primeiro, total);
    printf("O primeiro recebera: %.2f\n", primeiro);

    quantia_segundo (&segundo, total);
    printf("O segundo recebera: %.2f\n", segundo);

    quantia_terceiro (&terceiro, total);
    printf("O terceiro recebera: %.2f\n", terceiro);

    return 0;
}