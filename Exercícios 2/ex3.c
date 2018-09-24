#include <stdio.h>

int main (void){
	int dol;
	printf ("Quanto custa o produto em dolares? ");
	scanf ("%d", &dol);
	if (dol*3.17<=1000){
		printf ("E um bom negocio");
	}
	else{
		printf ("E um mau negocio");
	}
	return 0;
}
