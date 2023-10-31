//20. Dados tr�s n�meros reais l1, l2 e l3, representando os lados de um tri�ngulo, verifique 
//se o tri�ngulo � Eq�il�tero, Is�sceles ou Escaleno. Observa��o: Condi��o de Exist�ncia de um 
//tri�ngulo -> Cada um dos lados deve ser menor que a soma dos outros dois.

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

