//fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem
//com os nomes e a idae media entre essas pessoas, conforme exemplo.
//exemplo:
//Dados da primeira pessoa: 
//Nome: Maria Silva
//Idade: 19
//Dados da segunda pessoa: 
//Nome: Joao Melo
//Idade: 20
//A idade media de Maria Silva e Joao Melo eh de 19.5 anos

#include <stdio.h>

int main () {
    char nome1[50], nome2[50], nome3[50];
    int idade1, idade2, idade3, dia;
    float media;

//primeira
    printf("Dados da primeira pessoa: \n");
    printf("Nome: ");
    fflush(stdin);
    gets(nome1);

    printf("Idade: ");
    scanf("%d", &idade1);

//segunda
    printf("Dados da segunda pessoa: \n");
    printf("Nome: ");
    fflush(stdin);
    gets(nome2);

    printf("Idade: ");
    scanf("%d", &idade2);

//terceira
    printf("Dados da terceira pessoa: \n");
    printf("Nome: ");
    fflush(stdin);
    gets(nome3);

    printf("Idade: ");
    scanf("%d", &idade3);

    media = (idade1 + idade2 + idade3) / 3.0;

    printf("A idade media de %d , %d e %d eh de %.1f anos.", idade1, idade2, idade3, media);

    return 0 ;
}