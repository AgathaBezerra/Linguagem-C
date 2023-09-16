//Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular,
// bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
//o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, conforme exemplo. 
//Exemplo 1:
//Digite a largura do terreno: 10.0
//Digite o comprimento do terreno: 30.0
//Digite o valor do metro quadrado: 200.00
//Area do terreno = 300.00
//Preco do terreno = 60000.00

#include <stdio.h>

int main () {
    float largura, comprimento, metro, area, preco;

    printf("Informe a largura do terreno: ");
    scanf("%f", &largura);
    printf("Informe o compreimento do terreno: ");
    scanf("%f", &comprimento);
    printf("Informe o metro quadrado: ");
    scanf("%f", &metro);

    area = largura * comprimento;
    preco = area * metro;

    printf("Area do terreno: %f\n", area);
    printf("Preco do terreno: %f\n", preco);

    return 0;
}