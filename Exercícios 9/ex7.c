#include <stdio.h>
#include <stdlib.h>

typedef struct Caixa{
	int valor;
	struct Caixa* prox;
}Caixa;

int retira(struct Caixa* caixa, int valor){
	Caixa* t2;
	if(caixa->valor==valor){
		return 2;
	}
	while(caixa->valor!=valor){
		t2=caixa;
		caixa=caixa->prox;		
	}
	t2->prox=caixa->prox;
	caixa->prox=NULL;
	free(caixa);
	return 1;
}

int contem(struct Caixa* caixa, int valor){
	Caixa* t1;
	t1=caixa;
	while(caixa!=NULL){
		if(caixa->valor==valor){
			int c=retira(t1, valor);
			return c;
		}
		else{
			caixa=caixa->prox;
		}
	}
	return 0;
}
	
void exibe(struct Caixa* caixa){
	while (caixa!=NULL){
		printf("%d->", caixa->valor);
		caixa=caixa->prox;
	}
	printf("\n");
}

int main(){
	Caixa* cabeca;
	cabeca=NULL;
	int n;
	printf("Digite um valor para a primeira caixa: ");
	scanf("%d", &n);
	while(n!=(-1)){
		Caixa* novo;
		novo=(Caixa*) malloc(sizeof(Caixa));
		novo->valor=n;
		novo->prox=NULL;
		if (cabeca!=NULL){
			Caixa* t1=cabeca;
			while (t1->prox!=NULL){
				t1=t1->prox;
			}
			t1->prox=novo;
		}
		else{
			cabeca=novo;
		}
		printf("Digite um valor para a nova caixa: ");
		scanf("%d", &n);
	}
	exibe(cabeca);
	int valor;
	printf("Digite o valor a ser buscado e removido: ");
	scanf("%d", &valor);
	int c=contem(cabeca, valor);
	if (c==2){
		Caixa* t3;
		t3=(Caixa*) malloc(sizeof(Caixa));
		t3=cabeca;
		cabeca=cabeca->prox;
		free(t3);
		printf("O valor %d foi encontrado e removido\n", valor);
		exibe(cabeca);
	}
	else if (c==1){
		printf("O valor %d foi encontrado e removido\n", valor);
		exibe(cabeca);
	}
	else{
		printf("O valor %d nao foi encontrado\n", valor);
	}
}
