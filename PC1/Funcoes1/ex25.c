//25. Leia três inteiros positivos dia, mes e ano que representam o dia, o mês e o ano, respectivamente. 
//Em seguida determine se os dados introduzidos determinam ou não uma data válida. Observação: considerar anos bissextos.

#include <stdio.h> 

int anoBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return 1; // Ano bissexto
    } else {
        return 0; // Ano não bissexto
    }
}	

int dataValida (int dia, int mes, int ano) {
	if (mes <= 0 || mes >= 13) {
			printf("Mes invalido. \n");
			return 0;
	}
	
	if (dia <= 0 || dia >= 32) {
			printf("Data invalida.\n");
			return 0;
	}

	if (mes == 2) {
		if (anoBissexto(ano) && dia >= 30) {
			printf("Data invalida."); // dia invalido em ano bissexto
			return 0;
		} else if (dia >= 29){
			printf("Data invalida."); // dia invalido em ano nao bissexto
			return 0; 
		}
	}	
	return 1;
}

int main() {
	int dia, mes, ano;
	
	printf("Informe um numero (para o dia): ");
	scanf("%d", &dia);
	
	printf("Informe um numero (para o mes): ");
	scanf("%d", &mes);
	
	printf("Informe um numero (para o ano): ");
	scanf("%d", &ano);
	
	if (dataValida(dia, mes, ano)) {
        printf("Eh uma data valida.\n");
    }
    
	return 0;
	
}
