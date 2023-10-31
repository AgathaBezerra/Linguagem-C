//23. Avalie a função f(x,y) abaixo para quaisquer dois valores de entrada introduzidos pelo usuário.
//f(x,y) = x + y, se x >= 0  e y >= 0
//f(x,y) = x + y^2, se x >= 0  e y < 0
//f(x,y) = x^2 + y, se x < 0  e y >= 0
//f(x,y) = x^2 + y^2, se x < 0  e y < 0

#include <stdio.h> 
#include <math.h>

int funcaoAvaliada (int x, int y) {
	int equacao;
	
	if  (x >= 0  && y >= 0) {
		equacao = x + y;
		
	} else if ( x >= 0  && y < 0) {
		equacao = x + pow(y,2);
		
	} else if ( x < 0  && y >= 0) {
		equacao = pow(x,2) + y;
		
	} else if (x < 0  && y < 0 ) {
		equacao = pow(x,2) + pow(y,2);
		
	} else {
		printf("Equacao invalida.\n");
		return 0;
	}
	
	return equacao;
}

int main () {
	int x, y;
	int equacao;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &x);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &y);
	
	equacao = funcaoAvaliada(x, y);
	
	printf("O resultado da equacao: %d", equacao);
	
	return 0;
}
