#include <stdio.h>

int main(void){
	int n1, n2;
	printf ("Digite o primeiro numero: ");
	scanf ("%d", &n1);
	printf ("Digite o segundo numero: ");
	scanf ("%d", &n2);
	int i=n1;
	while (i<=n2){
		printf ("%d\n", i);
		i+=1;
	}
	return 0;
}
