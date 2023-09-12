#include <stdio.h>

//8. Escreva um programa em C para contar a frequência de cada caractere em uma determinada string.

int main() {
    char str[50];
    int frequencia[256] = {0}; // inicia o array de frequência com zeros

    printf("Digite um caracter: ");
    fgets(str, sizeof(str), stdin); //usado ao inves de scanf para ler strings, pois evita possíveis estouros de buffer.
    //sizeof é um operador e retorna a quantidade de bytes de um objeto ou tipo. 

    // calcula a frequência de cada caractere na string
    for (int i = 0; str[i] != '\0'; i++) {  // string str, cada caractere incrementa a contagem 
        frequencia[(int)str[i]]++;
    }

    //  frequência de cada caractere
    for (int i = 0; i < 256; i++) {
        if (frequencia[i] > 0) {
            printf("Caractere '%c': %d \n", (char)i, frequencia[i]);
        }
    }

    return 0;
}
