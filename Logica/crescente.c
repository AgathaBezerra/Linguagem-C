//Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
//mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
//programa deve finalizar quando forem digitados dois valores iguais. 
//Exemplo:
//Digite dois numeros:
//5
//4
//DECRESCENTE!
//Digite outros dois numeros:
//3
//8
//CRESCENTE!
//Digite outros dois numeros:
//2
//2


#include <stdio.h>

int main () {

    int i;
    int vetor[2];

    printf("Digite dois numeros: ");

    for (i = 0; i < 2; i++) {
        scanf("%d", &vetor[i]);
    }

    while (vetor[0] != vetor[1]) {

        if (vetor[0] > vetor[1]) {
            printf("DECRESCENTE.\n");

        } else {
            printf("CRESCENTE.\n");
        }
            printf("Digite outros dois numeros: ");
                
                for (i = 0; i < 2; i++) {
                    scanf("%d", &vetor[i]);
                }
    }

    return 0;
}