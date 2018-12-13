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

int main(){
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	int pr=eh_primo(x);
	if (pr==1){
		printf ("O numero %d e primo\n", x);
	}
	else{
		printf("O numero %d nao e primo\n", x);
	}
}
