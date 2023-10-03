#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){ 

//   ax^2 + bx + c = 0
// passo 1 - Δ = b^2 – 4ac
// passo 2 x = (– b ± √Δ)/2·a

printf("------------- INICIO DO PROGRAMA---------------\n\n");
float a, b, c, delta, raizdelta, x, x2, final, final2;

printf("Vamos calcular uma equacao de segundo grau \n");

printf("ax**2 + bx + c = 0\n"); 
printf("Digite a numero 01 \n"); 
scanf ("%f",& a); 
printf("Digite a numero 02 \n"); 
scanf ("%f",& b); 
printf("Digite a numero 01 \n"); 
scanf ("%f",& c); 

delta = (b*b) - (4*a*c);
raizdelta = sqrt(delta);

x = (-b + raizdelta)/(2*a);
x2 = (-b - raizdelta)/(2*a);

if (delta<0)
{
    printf("A equacao nao tera raizes reais\n");
}

if (x==x2)
{
    printf("Valor unico de X e %.2f\n", x);
}
else   
{
    printf("Valores de X sao %.2f e %.2f\n", x, x2);    
}
printf("\n------------ FIM DO PROGRAMA------------\n\n");

}