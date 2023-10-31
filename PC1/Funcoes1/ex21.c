//21. Dado um ano no intervalo fechado [1700,2500], verifique se esse ano � bissexto. Observa��o: Um ano � bissexto 
//se for m�ltiplo de 4 mas n�o de 100, ou, se for m�ltiplo de 400.
//EXEMPLO: 1900 n�o foi um ano bissexto, enquanto os anos 2000 e 2004 foram.

#include <stdio.h> 


int anoBissexto (int ano) {
	if (ano < 1700 || ano > 2500) {
		return 0;
	} 
	
	if ((ano % 4 == 0 && ano % 100 != 0)  || ano % 400 == 0) {
		return 1;
	} else {
		return 0;
	}
	
}

int main () {
	int ano;
	
	printf("Informe um ano: ");
	scanf("%d", &ano);
	
	if (anoBissexto (ano)) {
		printf("Eh um ano bissexto.\n");
	} else { 
		printf("Nao eh um ano bissexto.\n");
	}
	
	return 0;
}
