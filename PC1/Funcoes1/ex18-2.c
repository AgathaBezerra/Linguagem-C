#include <stdio.h>

int maiorIgual(int num[]) {
    int maior_igual = num[0];
    
    if (num[1] >= num[0] && num[1] >= num[2]) {
        maior_igual = num[1];
    } else if (num[2] >= num[0]) {
        maior_igual = num[2];
    }

    return maior_igual;
}

int main() {
    int num[3];
    int i;

    printf("Informe tres numeros: ");

    for (i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
    }

    int resultado = maiorIgual(num);

    printf("O numero maior ou igual dentre os tres eh: %d", resultado);

    return 0;
}

