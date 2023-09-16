//Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
//indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
//e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
//mostrar a mensagem "IMPOSSIVEL CALCULAR". 
//Exemplo 1:                               Exemplo 2:
//Digite as idades:                        Digite as idades: 
//31                                      -10 
//27                                       IMPOSSIVEL CALCULAR 
//46
//-5
//MEDIA = 34.67 


#include <stdio.h>

int main () {
    int idade, soma, n_pessoas;
    double media;

    printf("Digite as idades: ");
    scanf("%d", &idade);

    if ( idade < 0 ) {
        printf("IMPOSSIVEL CALCULAR.\n");
    }
    else {
         soma = 0;
         n_pessoas = 0;

         while (idade > 0) {
             soma = soma + idade;
             n_pessoas++;
             scanf("%d", &idade);
             media = (double)soma / n_pessoas;
         }
         printf("MEDIA = %.2lf", media);
    }

    return 0;
}


