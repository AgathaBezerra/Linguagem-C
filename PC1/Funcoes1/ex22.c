//22. Leia um número inteiro e verifique se ele pertence ao intervalo [0,100].

#include <stdio.h> 

int pertenceNumero (int numero) {
	if (numero >= 0 && numero <= 100) {
		return 1;
	} else {
		return 0;
	}
	 
}

int main () {
	int numero;
	
	printf("Informe um numero: ");
	scanf("%d", &numero);
	
	if (pertenceNumero (numero)) {
		printf("O numero pertence ao intervalo informado.\n");
	} else {
		printf("O numero nao pertence ao intervalo informado.\n");
	}
	
	return 0;
}
