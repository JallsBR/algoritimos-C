#include <stdio.h>
#include <stdlib.h>

int main(){

// um software capaz de receber duas notas, primeira avaliação e segunda avaliação. 
// Após receber essas informações, seu algoritmo deve calcular a média. 
// Se a média for maior do que 7, o programa deve retorna a seguinte mensagem “APROVADO”. 
// Caso contrário, “Aguardando a Prova Final” 
printf("\n\n------------- INICIO DO PROGRAMA---------------\n\n");
float nota01, nota02, media;

// Entrada de dados Prova01 
printf("Digite a Primeira Nota\n"); 
scanf ("%f",& nota01); 

// Entrada de dados Prova01 
printf("Digite a Segunda Nota\n"); 
scanf ("%f",& nota02); 
// Media
media = (nota01+nota02)/2;
printf("A media do aluno e de %.2f ", media);
if(media <7.0)
{
printf("e o aluno esta aguardando prova final.");
}
else
{
printf("e o aluno esta aprovado.");
}
printf("\n\n------------ FIM DO PROGRAMA------------\n\n");
}