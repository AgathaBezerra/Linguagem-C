//Palíndromo é uma palavra, frase ou número que permanece igual quando lida de trás para diante. 

//9. Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um palíndromo ou não. 
//Um palíndromo é uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. 
//Exemplos: ovo, arara, rever, asa, osso etc.

#include <stdio.h>
#include <string.h>

    int main () {

        char caracter[50];
        int i, tamanho, diferentes = 0;

         printf("Digite um caracter: ");
         scanf("%s", caracter);

         tamanho = strlen(caracter); //A função strlen() retorna o comprimento da string fornecida.
         tamanho--;
         i = 0;

         while(tamanho >= i) {
            if(caracter[i] != caracter[tamanho])
                diferentes++;
            i++;
            tamanho--;
         } 

         if(diferentes == 0)
            printf("A string '%s' e um palindromo.\n");
        else  
            printf("A string '%s' nao e um palindromo.\n");

    return 0;
}

