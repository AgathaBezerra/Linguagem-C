//26. Faça um programa que pergunte a velocidade de um carro do usuário. Caso ultrapasse 100km/h, exiba
// uma mensagem dizendo que o mesmo foi multado. Exiba o valor da multa, cobrando R$ 5,00 por km acima do permitido.

#include <stdio.h> 

float velocidadeCarro (float velocidade) {
	float multa;
	
	multa = 5.00;

	if (velocidade <= 100 && velocidade >= 1) {
		printf("\n O usuario esta dentro da velocidade permitida.\n");
	}
	
	if (velocidade > 100) {
		printf("\n O usuario sera multado por velocidade nao permitida!\n");

		multa = multa * (velocidade - 100);
		return multa;
	}
	return 0;
}

int main () {
	float velocidade;
    float valorMulta;
	
	printf("Informe a velocidade do carro (em km/h): ");
	scanf("%f", &velocidade);
	
	valorMulta = velocidadeCarro (velocidade);
	
	printf("\n A multa a ser cobrada sera de %.2f", valorMulta);
	
	return 0;
}