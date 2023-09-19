#include<stdio.h>
#include <stdbool.h>

int main() {
 
   int M, N, O, P;
   int i, j;

   printf("Informe a primeira matriz \n");

   printf("Quantas linhas? \n");
   scanf("%d", &M);
  
   printf("Quantas colunas? \n");
   scanf("%d", &N);

   int mat[M][N];

   for (i = 0; i < M; i++) {
       for (j = 0; j < N; j++) {
          printf("[%d, %d]: ", i, j);
          scanf("%d", &mat[i][j]);
        }
    }

   printf("\n Informe a segunda matriz \n");

   printf("Quantas linhas? \n");
   scanf("%d", &O);
  
   printf("Quantas colunas? \n");
   scanf("%d", &P);

   int mat2[O][P];

   for (i = 0; i < O; i++) {
       for (j = 0; j < P; j++) {
          printf("[%d, %d]: ", i, j);
          scanf("%d", &mat2[i][j]);
        }
    }

    bool igual;

    if ((M != O) || (N != P)) {
        igual = false;
    } else {
        igual = true;
    }

    if (igual){
       for (i = 0; i < O; i++) {
           for (j = 0; j < P; j++) {
                if (mat[i][j] == mat2[i][j]) {
                igual = true;
                } else {
                  igual = false;
             }

          }
        }
    }

    if (igual) {
        printf("Matriz eh igual. ");
    } else {
        printf("Matriz eh diferente. ");
    }


  return 0;
}