//19. Dados quatro valores inteiros quaisquer, encontre o 
//maior (ou igual) entre eles.

#include <stdio.h> 

int maiorIgual (int num[]) {
	int maior_numero;
	
	maior_numero = num[0];
	
	if (num[1] >= num[2] && num[1] >= num[3]) {
		maior_numero = num[1];
	} else if (num [2] >= num [3]) {
		maior_numero = num[2];
	} else {
		maior_numero = num[3];
	}
	
	return maior_numero;
}

int main () {
	int num[4], maior;
	int i;
	
	printf("Informe os quatros valores: ");
	
	for (i = 0; i < 4; i++) {
		scanf("%d", &num[i]);
	}
	
	maior = maiorIgual(num);
	
	printf("O numero maior ou igual dentre os quatro eh: %d", maior);
	
	return 0;
}




