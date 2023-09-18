//Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

#include <stdio.h>

void ano_nascimento (int idade, int ano_atual, int *ano_nasc) {
    *ano_nasc = ano_atual - idade;

}

int main () {
    int idade, ano_atual, ano_nasc;

    printf("Informe a idade: ");
    scanf("%d", &idade);

    printf("Informe o ano atual: ");
    scanf("%d", &ano_atual);

    ano_nascimento (idade, ano_atual, &ano_nasc);

    printf("Ano nascimento = %d", ano_nasc);

    return 0;
}