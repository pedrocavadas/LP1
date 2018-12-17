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
	FILE* f = fopen("/tmp/ex8.bin", "rb");
	fread(&n, sizeof(int), 1, f);
	for (i=0;i<n;i++){
		fread(&(vet[i]), sizeof(struct Pessoa), 1, f);
		vet[i].nome[25]='\0';
	}
	for (i=0;i<n;i++){
		printf("Idade: %d Nome: %s\n", vet[i].idade, vet[i].nome);
	}
	fclose(f);
}
