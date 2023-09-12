#include <stdio.h>
#include <string.h>

//4. Escreva um programa em C para separar os caracteres individuais de uma string por um traço '-'. Exemplo:
//Entrada: 'google.com'
//Saída: 'g-o-o-g-l-e-.-c-o-m'

int main() {
    char caracter[50];

    printf("Digite um caracter: ");
    scanf("%s", caracter);  // Leitura da string

    int tamanho = strlen(caracter);  // Obtém o tamanho da string usando a função strlen()

    // Construindo a saída com os traços
    for (int i = 0; i < tamanho; i++) {
        printf("%c", caracter[i]);  // Imprime o caractere atual
        if (i != tamanho - 1) {
            printf("-"); // Imprime um traço, exceto para o último caractere
        }
    }

    printf("\n");

    return 0;
}
