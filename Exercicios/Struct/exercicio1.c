#include <stdio.h>
#include <string.h>

struct nascimento {
    int dia;
    char mes[12];
    int ano;
}

struct dados {
    char nome[50];
    int idade, cpf, setor;
    struct nascimento nasc;
    char sexo[1], cargo[30];
    double salario;

}

int main () {
     
     struct dados d;

     printf("Nome: ");
     gets(d.nome);

     printf("Idade: ");
     scanf("%d", &d.idade);

     printf("Sexo (M/F): ");
     gets(d.sexo);

     printf("CPF: ");
     scanf("%d", &d.cpf);


     printf("\nData de nascimento\n");
     
     printf("Dia: ");
     scanf("%d", &d.nasc.dia);

     printf("Mes (em palavra): ");
     gets(d.nasc.mes);

     printf("Ano: ");
     scanf("%d", &d.nasc.ano);

     printf("Setor onde trabalha (0-99): ");
     scanf("%d", &d.setor);

     printf("Cargo que ocupa: ");
     gets(d.cargo);

     printf("Salario: ");
     scanf("%lf", &d.salario);

     printf("Nome: %s\n", d.nome);
     printf("Idade: %d\n", d.idade);
     printf("Sexo: %s\n", d.sexo);
     printf("CPF: %d\n", d.cpf);
     printf("Data de Nascimento: ");
     printf("Dia / mes / ano: %d %s %d\n", d.nasc.dia, d.nasc.mes, d.nasc.ano);
     printf("Codigo do Setor onde trabalha: %d\n", d.setor);
     printf("Cargo que ocupa: %s\n", d.cargo);
     printf("Salario: %lf\n", d.salario);



    return 0;

}