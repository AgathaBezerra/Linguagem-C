//35. Escreva um programa em C para exibir o cubo do número até dado um inteiro.
//Exemplo:
//Número de entrada de termos: 5
//Saída esperada:
//O número é: 1 e o cubo do 1 é: 1
//O número é: 2 e o cubo do 2 é: 8
//O número é: 3 e o cubo do 3 é: 27
//O número é: 4 e o cubo do 4 é: 64
//O número é: 5 e o cubo do 5 é: 125

#include <stdio.h>

int calcular_cubo (int num) {
    int calcular;

        calcular = num * num * num;

    return calcular;
}

int main () {
    int num, i, cubo;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        cubo = calcular_cubo(i); //calcular cubo de i 
        printf("O numero eh: %d e o cubo do %d eh: %d\n", i, i, cubo);
    }

    return 0;
}