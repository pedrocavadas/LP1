#include <stdio.h>
#include <stdlib.h>

int todos_os_primos(int max){
	int qtd=0, i, j;
	for (i=2;i<max;i++){
		for (j=2;j<i;j++){
			if (i%j==0){
				qtd+=1;
			}
		}
		if (qtd==0){
			printf ("%d\n", i);
		}
		qtd=0;
	}
}
int main(void){
	int max;
	printf ("Digite um numero: ");
	scanf ("%d", &max);
	int x=todos_os_primos(max);
	return 0;
}
