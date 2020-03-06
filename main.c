#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//void main () 
//{
//	int id;
//	printf ("idade?"); 	scanf ("%d", &id);
	
//	if (id>=18)		printf("Adulto: %d", id);
//	else			printf("Não eh Adulto: %d", id);
	


//}

//Ex. 01 Escreva um programa que exiba os números pares entre 1 e 100.

#include <stdio.h>
#include <stdlib.h>


//aperta F11  - escolher a extensão.c
// colocar nome.c
// ler 2 notas . Mostra a média e a situação
// media >= 7 Aprovado
// media < 5  Reprovado
//media >=5 e media <7 Exame
#include <stdio.h>
void main ()
{
float n1, n2, n3, med;
printf("nota1:"),	scanf("%f", &n1);
printf("nota2:"),	scanf("%f", &n2);
printf("nota3:"),	scanf("%f", &n3);
med = (n1+n2+n3) /3;
printf ("Media:  %.2f e seu conceito eh ", med );
if (med >=9)			printf("A");
else if (med >=7)		printf("B");
else if ("med >= 5")	printf("C");
else if ("med >=3")		printf("D");
else 					printf("E");
	

	
}
