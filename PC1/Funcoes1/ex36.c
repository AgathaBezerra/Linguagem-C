//36. Escreva um programa em C para exibir a tabuada de um número n.

#include <stdio.h>

void calcular_tabuada (int num) {
    int i, multi;

    for (i = 1; i <= 10; i++){
        multi = num * i;
        printf("%d x %d = %d\n", num, i, multi);
    }
}

int main () {
    int num;

    printf("Deseja calcular a taduada de qual numero? ");
    scanf("%d", &num);

    calcular_tabuada(num);

    return 0;
    
}