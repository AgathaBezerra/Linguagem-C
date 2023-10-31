//28. Escreva um programa que receba uma letra e verifique se a mesma é vogal ou consoante, usando switch ... case.

#include <stdio.h>

char verificarLetra (char letra) {

    switch (letra) {
    case 'A': 
        printf("A letra informada eh uma vogal.\n");
        return 'v'; // Vogal
        break;

    case 'E': 
        printf("A letra informada eh uma vogal.\n");
        return 'v'; // Vogal
        break;

    case 'I':
        printf("A letra informada eh uma vogal.\n");
        return 'v'; // Vogal
        break;

    case 'O':
        printf("A letra informada eh uma vogal.\n");
        return 'v'; // Vogal
        break;

    case 'U':
        printf("A letra informada eh uma vogal.\n");
        return 'v'; // Vogal
        break;
    
    default:
        return 'c'; // Consoante
        break;

    }
}

int main () {
    char letra;
    char verificar;

    printf("Informe uma letra do alfabeto (em maiusculo): ");
    scanf("%c", &letra);

    verificar = verificarLetra (letra);

    if (verificar == 'v') {
        printf("A letra %c eh uma vogal.\n", letra);
    } else if (verificar == 'c') {
        printf("A letra %c eh uma consoante.\n", letra);
    } 

    return 0;

}