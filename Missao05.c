#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main()
{  
printf("\n\n------------- INICIO DO PROGRAMA---------------\n\n");    
double porcentagem_do_material, fracao, meia_vida, meia_vida_atual, tempo, material_restante, massa_inicial;

//Desenvolva um software em C que analise uma taxa de decaimento de meia vida de um isótopo radiativo.
//Nível 1: Porcentagem do material radioativo que resta na amostra.
//Nível 2: Fração referente ao material radioativo que resta na amostra.
//Nível 3: Massa do material radioativo que resta na mostra.

printf("Analise uma taxa de decaimento de meia vida de um isotopo radiativo.\n\n"); 
// Entrada de dados (1 parte)
printf("Digite o tempo que se passou desde o inicio da observacao (anos)\n"); 
scanf ("%lf",& tempo); 
// Entrada de dados (2 parte)
printf("Digite o tempo de meia-vida do isotopo (anos)\n"); 
scanf ("%lf",& meia_vida); 
// Entrada de dados (3 parte)
printf("Digite a massa inicial de material radioativo que havia na amostra (kg)\n"); 
scanf ("%lf",& massa_inicial); 

// Formulas 
meia_vida_atual = tempo/meia_vida;
porcentagem_do_material = (1/(pow(2,meia_vida_atual)))*100;
fracao = 1/(pow(2,meia_vida_atual));
material_restante =  massa_inicial*fracao;

// Resultados
printf("\n\nRESULTADOS:\n\n");   
printf("Porcentagem do material radioativo que resta na amostra. %.2lf\n", porcentagem_do_material);
printf("Fracao referente ao material radioativo que resta na amostra %lf\n", fracao);
printf("Massa do material radioativo que resta na mostra. %.2lf (Kg)\n", material_restante);

printf("\n\n------------ FIM DO PROGRAMA------------\n\n");
}