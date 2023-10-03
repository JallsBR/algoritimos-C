#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

  printf("\n\n------------- INICIO DO PROGRAMA---------------\n\n");
  float a,b,operacao;
  int escolha;

  //Entrada de dados
  printf("Calculadora\n\n");
  printf("Digite o numero 01\n ");
  scanf("%f",&a);
  printf("Digite o numero 02\n");
  scanf("%f",&b);

  // Escolha de operaçao
  printf("Escolha a operacao:\n");
  printf("1-Adiçao\n");
  printf("2-Subtracao\n");
  printf("3-Multiplicacao\n");
  printf("4-Divisao\n");
  printf("5-Exponenciacao\n");
  printf("6-Radiciacao\n");
  scanf("%d",&escolha);

  // Operação baseada na escolha  + Resultados
  if(escolha==1){
    operacao=(a+b);
    printf("operacão %.2f+%.2f=%.2f",a,b,operacao);
  }  
  if(escolha==2){
    operacao=(a-b);
    printf("operacao %.2f-%.2f=%.2f",a,b,operacao);
  }
  if(escolha==3){
    operacao=(a*b);
    printf("operaçao %.2f*%.2f=%.2f",a,b,operacao);
  }
  if(escolha==4){
    operacao=(a/b);
    printf("operacao %.2f/%.2f=%.2f",a,b,operacao);
  }
  if(escolha==5){
   operacao=pow(a,b);
    printf("operacao %.2f^%.2f=%.2f",a,b,operacao);
  }   
  if(escolha==6){    
  operacao=pow(a,1/b);
      printf("operacao radiciacao,%.2f,%.2f=%.2f",a,b,operacao);
  }
  if(escolha<1 || escolha>6){    
  
      printf("Operacao Invalida");
  }

  printf("\n------------ FIM DO PROGRAMA------------\n\n");
    }