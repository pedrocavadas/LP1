#include <stdio.h>
#include <stdlib.h>

int eh_primo(int x){
	int i, qtd=0;
	for(i=1;i<=x;i++){
		if(x%i==0){
			qtd+=1;
		}	
	}
	if (qtd==2){
		return 1;
	}
	else{
		return 0;
	}
}

void todos_os_primos(int max){
	int x;
	printf("NUMEROS PRIMOS\n");
	for(x=2;x<max;x++){
		int pr=eh_primo(x);
		if(pr==1){
			printf("%d\n", x);
		}
	}
}

int main(){
	int max;
	printf("Digite um numero: ");
	scanf("%d", &max);
	todos_os_primos(max);
}
