#include <stdio.h>
#include <stdlib.h>

int main(){  

//programa pra entregar os resultados: 2ab+10 - ab/c  - a/b/c
printf("\n\n------------- INICIO DO PROGRAMA---------------\n\n");
float a=1, b=2, c=3, operacao;

// Operação 01
operacao = 2*a*b+10;
printf("\n2ab+10 = %.2f", operacao);
// Operação 02
operacao = a*b/c;
printf("\na*b/c = %.2f", operacao);
// Operação 03
operacao = a/b/c;
printf("\n2a/b/c = %.2f", operacao);

 printf("\n\n--------------- FIM DO PROGRAMA-----------------\n\n");
}