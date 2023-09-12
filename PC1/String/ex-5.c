#include <stdio.h>
#include <string.h>

//5. Escreva um programa em C para encontrar o caractere com maior frequência de ocorrência em uma string.

int main() {
    char caracter[50];
    int frequencia[256] = {0};  // quantidade da tabela ascii

    printf("Digite um caracter: ");
    scanf("%s", caracter);

    // calculo da frequência de cada caractere 
    for (int i = 0; caracter[i] != '\0'; i++) {  // loop for que percorre a string até encontrar o caractere nulo 
        frequencia[(int)caracter[i]]++;  
    }

    char caractereMaiorFrequencia = '\0';
    int maiorFrequencia = 0;

    // encontra o caractere com maior frequência 
    for (int i = 0; i < 256; i++) {
        if (frequencia[i] > maiorFrequencia) {
            maiorFrequencia = frequencia[i];
            caractereMaiorFrequencia = (char)i; //transformar o i em um caracter 
        }
    }

    if (maiorFrequencia > 1) { // se por um acaso o usuario nao digita por exemplo "loja" 
        printf("O caractere com maior frequencia eh '%c', aparecendo %d vezes.\n", caractereMaiorFrequencia, maiorFrequencia);
    } else {
        printf("Todos os caracteres aparecem a mesma quantidade de vezes.\n");
    }


    return 0;
}
