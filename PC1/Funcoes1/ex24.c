//24. Escreva um programa para que receba o número do mês e o ano e imprima o número total de dias naquele mês 
//usando switch...case. Observação: considerar anos bissextos. EXEMPLO: entrada: (1, 2000), saída: (Janeiro - 31 dias)

#include <stdio.h>

int verificarMes (int mes, int ano) {
	
	if ((ano % 4 == 0 && ano % 100 != 0)  || ano % 400 == 0) {
		int mes;
		mes = 0;
		
		if (mes < 1 || mes > 12) {
        	printf("Mês inválido.\n");
        	
        return 0;
   		 }
    
		switch (mes) {
			
		case 1:
			printf("Janeiro");
			dias = 31;
		break;
		
		case 2: 
			printf("Fevereiro");
			dias = 29;
		break;
		
		case 3: 
			printf("Marco");
			dias = 31;
		break;
		
		case 4:
			printf("Abril");
			dias = 30;
		break;
		
		case 5: 
			printf("Maio");
			dias = 31;
		break;
		
		case 6: 
			printf("Junho");
			dias = 30;
		break;
		
		case 7: 
			printf("Julho");
			dias = 31;
		break;
		
		case 8: 
			printf("Agosto");
			dias = 31;
		break;
		
		case 9: 
			printf("Setembro");
			dias = 30;
		break;
		
		case 10:
			printf("Outubro");
			dias = 31;
		break;
		
		case 11: 
			printf("Novembro");
			dias = 30;
		break;
		
		case 12:
			printf("Dezembro");
			dias = 31;
		break;

	}
		return 1; 
		
	} else {
		
		switch (mes) {
			
		case 1:
			printf("Janeiro");
			dias = 31;
		break;
		
		case 2:
			printf("Fevereiro");
			dias = 28;
		break;
		
		case 3:
			printf("Marco");
			dias = 31;
		break;
		
		
		case 4:
			printf("Abril");
			dias = 30;
		break;
		
		case 5: 
			printf("Maio");
			dias = 31;
		break;
		
		case 6: 
			printf("Junho");
			dias = 30;
		break;
		
		case 7: 
			printf("Julho");
			dias = 31;
		break;
		
		case 8: 
			printf("Agosto");
			dias = 31;
		break;
		
		case 9: 
			printf("Setembro");
			dias = 30;
		break;
		
		case 10:
			printf("Outubro");
			dias = 31;
		break;
		
		case 11: 
			printf("Novembro");
			dias = 30;
		break;
		
		case 12:
			printf("Dezembro");
			dias = 31;
		break;
		default;
	}
	}
	
	return 1;
	
}

int main () {
	int mes, ano;
	
	printf("Informe um mes (de 1 a 12): ");
	scanf("%d", &mes);
	
	printf("Informe um ano: ");
	scanf("%d", &ano);
	
	verificarMes(mes, ano);
	
	if (verificarMes > 0) {
        printf("O mês %d tem %d dias.\n", mes, verificarMes);
    }
    
    return 0;
}

