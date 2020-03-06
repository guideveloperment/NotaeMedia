#include <stdio.h>

void main (){
	int magic;
	int guess;
	
	magic = rand ();
	int i;
	for  (i=0;i<3; i++){
		
		printf ("advinhe o numero magico");
	scanf("%d", &guess);
	
	if (guess == magic){
		printf ("certo");
		}else{
			printf ("Errado");
	}

		}
}
