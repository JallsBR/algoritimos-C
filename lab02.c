#include <stdio.h>
#include <stdlib.h>

int main()
{

// Desenvolva um software que seja capaz de receber do usuário uma informação que corresponda 
// a um número de dias e, após isso, converta essa informação no seu respectivo equivalente em anos. 
int diastotais, dias, meses, anos;

printf("\n\n------------- INICIO DO PROGRAMA---------------\n\n");

printf("Programa para converter dias em anos\n"); 
// Entrada de dados de dias 
printf("Digite a quantidade de dias\n"); 
scanf ("%d",& diastotais); 

// Conversão
anos = diastotais/365;
meses = (diastotais%365)/30;
dias = ((diastotais%365)%30);

printf("\n\n%d dias equivalem a %d ano(s)", diastotais, anos);
if (meses>0)
{
    printf(", %d mes(es)", meses);
}
if (dias>0)
{
    printf(", %d dia(s)", dias);
}
printf("\n\n------------ FIM DO PROGRAMA------------\n\n");
}