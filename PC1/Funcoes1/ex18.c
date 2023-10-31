//18. Dados três valores inteiros quaisquer, encontre o MAIOR 
//(OU IGUAL) entre eles.

#include <stdio.h>

void maiorIgual (int num[] ) {
    int maior_igual;

    maior_igual = num[0];
    
    if (num[1] >= num[0] && num[1] >= num[2]) {
        maior_igual = num[1];
    } else if (num[2] >= num[0]) {
        maior_igual = num[2];
    }
    
}

int main () {
    int num[3];
    int i;

    printf("Informe tres numeros: ");

    for (i = 0; i < 3; i++) {
        scanf("%d\n", &num[i]);
    }

    maiorIgual (num);

    printf("O numero maior ou igual dentre os tres eh: %d", maiorIgual);

    return 0;
}