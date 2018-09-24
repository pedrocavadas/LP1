#include <stdio.h>

int main(void){
	int mph;
	printf ("Qual sua velocidade em milhas por hora? ");
	scanf ("%d", &mph);
	int kmh=(1.6*mph);
	if (kmh<=80){
		printf ("ACELERE!");
	}else if (kmh>=100){
		printf ("DESACELERE!!");
	}else{
		printf ("MANTENHA!");
	}
	return 0;	
}
