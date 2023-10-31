//27. Faça um programa que pergunte o salário de um funcionário e calcule o valor do aumento. 
//Para salários superiores a R$ 1.250,00, o aumento é de 10%. Para os inferiores o aumento é de 15%.

#include <stdio.h> 

float valorAumento (float salario) {
    float aumento;

    if (salario > 1250.00) {
        aumento = 0.1 * salario;
    } else if (salario < 1250.00) {
        aumento = 0.15 * salario;
    }

    return aumento;
}

int main () {
    float salario;
    float novoSalario;

    printf("Informe o valor do salario: ");
    scanf("%f", &salario);

    novoSalario = valorAumento (salario);

    printf("O aumento do funcionario sera: %.2f\n", novoSalario);

    return 0;
}
