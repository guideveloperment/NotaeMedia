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
