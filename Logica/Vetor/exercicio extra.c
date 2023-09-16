//para ler 3 numeros inteiros. em seguida, mostrar qual o menor dentre os 3 numeros lidos. em caso de empate, mostrar uma vez.

#include <stdio.h>

int main () {

    int vetor[3];
    int menor, i;

    printf("Informe tres valores: ");

    for (i = 0; i < 3; i++) {
        scanf("%d", &vetor[i]);
    }

    if ((vetor[0] < vetor[1]) && (vetor[0] < vetor[2])) {
        menor = vetor[0];
    } else if ((vetor[1] < vetor[0]) && (vetor[1] < vetor[2])) {
        menor = vetor[1];
    } else {
        menor = vetor[2];
    }

    printf("MENOR = %d", menor);

    return 0;
}