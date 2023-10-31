//20. Dados três números reais l1, l2 e l3, representando os lados de um triângulo, verifique 
//se o triângulo é Eqüilátero, Isósceles ou Escaleno. Observação: Condição de Existência de um 
//triângulo -> Cada um dos lados deve ser menor que a soma dos outros dois.

#include <stdio.h>
#include <stdlib.h>

float verificarTriangulo (float L1, float L2, float L3) {
	
	if (L1 < L2 + L3 || L2 < L1 + L3 || L3 < L1 + L2) {
		return 1; //triangulo existe
	} else {
		return 0;
	}
}

int main () {
	float L1, L2, L3;
	
	printf("Informe os tres lados do triangulo: ");
	scanf("%f", &L1);
	scanf("%f", &L2);
	scanf("%f", &L3);
	
	if (verificarTriangulo (L1, L2, L3)) {
		if (L1 == L2 && L2 == L3) {
			printf("Eh um triangulo equilatero. \n");
			
		} else if (L1 == L2 || L1 == L3 || L2 == L3) {
			printf("Eh um triangulo isosceles. \n");  
			
		} else {
			printf("Eh um triangulo escaleno. \n");
		}
		
	} else {
		printf("Nao eh um triangulo.\n");
	}
	
	return 0;
}

