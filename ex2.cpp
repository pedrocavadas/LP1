#include <stdio.h>

int main (void){
	int num1, num2;
	printf ("Escolha um numero: ");
	scanf ("%d", &num1);
	printf ("Escolha outro numero: ");
	scanf ("%d", &num2);
	if (num1>num2){
		printf ("O maior numero e %d", num1);
	}
	else{
		if (num2==num1){
			printf ("Os dois numeros sao iguais");
		}
		else{
			printf ("O maior numero e %d", num2);
		}
	}
	return 0;
}
