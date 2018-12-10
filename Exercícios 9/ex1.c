#include <stdio.h>
#include <stdlib.h>

void rem(int* vet, int I){
	int i;
	for (i=I;i<4;i++){
		vet[i]=vet[i+1];	
	}
	for (i=0;i<4;i++){
		printf("%d\n", vet[i]);	
	}
}
void preenche(int* vet){
	int i;
	for (i=0;i<5;i++){
		printf("Digite um numero: ");
		scanf("%d", &vet[i]);	
	}
	for (i=0;i<5;i++){
		printf("%d\n", vet[i]);
	}
}

int main(){
	int vet[5], I;
	preenche(vet);
	printf("Digite o numero I: ");
	scanf("%d", &I);
	rem(vet,I);
}
