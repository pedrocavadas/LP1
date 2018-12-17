#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa{
	int idade;
	char nome[25];
}Pessoa;

int main(){
	struct Pessoa vet[100];
	int i, n;
	FILE* f = fopen("/tmp/ex8.bin", "wb");
	printf("Digite o numero de pessoas: ");
	scanf("%d", &n);
	fwrite(&n, sizeof(int), 1, f);	
	for (i=0;i<n;i++){
		printf("Digite a idade e o nome da pessoa, respectivamente: ");
		scanf("%d", &(vet[i]).idade);
		scanf("%s", (vet[i]).nome);
		fwrite(&vet[i], sizeof(struct Pessoa), 1, f);
	}
	fclose(f);
}
