// dessa forma, aparece os valores da memoria

// #include <stdio.h>

// int main () {
    
//     int vetor[5], i;

//     for (i = 0; i < 5; i++) {
//         printf("%d\n", vetor[i]);
//     }
    
//     return 0;
// }



// #include <stdio.h>

// int main () {
//     int vetor[5], i;

//     vetor[5] = 0; 
//     for (i = 0; i < 5; i++) {
//         printf("%d\n", vetor[i]);
//     }

//     return 0;
// }



//media de 5 notas

#include <stdio.h>

int main () {

    float notas[5];  //colchete para inserir valores
    float soma = 0;
    float media = 0;
    int i;

    printf("Informe as cinco notas: ");

    for (i = 0; i < 5; i++) {
        scanf("%f\n", &notas[i]);
    }

    for (i = 0; i < 5; i++) {
        soma = notas[i] + soma;
    }

    media = soma / 5.0;

    printf("A media do aluno eh %f", media);

    return 0;
    
}