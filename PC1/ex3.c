//3 - Faça um programa que calcule o aumento de um salário. Ele deve solicitar o valor do salário 
//e a porcentagem do aumento. Exiba o valor do aumento e do novo salário.

#include <stdio.h> 

void valor_aumento (float salario, float porcentagem, float *aumento, float *novo_salario) {  //porcentagem e salario nao serao ponteiros
    *aumento = (porcentagem / 100.00) * salario;                                              //pq eles nao serao alterados
    *novo_salario = *aumento + salario;

}

int main () {
    float salario, porcentagem, aumento, novo_salario;

    printf("Informe o valor do salario: ");
    scanf("%f", &salario);

    printf("Informe a porcentagem do aumento: ");
    scanf("%f", &porcentagem);

    valor_aumento (salario, porcentagem, &aumento, &novo_salario);

    printf("Valor do aumento = %.2f\n", aumento);
    printf("Novo salario = %.2f\n", novo_salario);

}