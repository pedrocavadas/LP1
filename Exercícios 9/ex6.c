#include <stdio.h>
#include <stdlib.h>

typedef struct Caixa{
	int valor;
	struct Caixa* prox;
}Caixa;

int contem(struct Caixa* caixa, int val){
	while(caixa!=NULL){
		if(caixa->valor==val){
			return 1;
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
	printf("Digite o valor a ser buscado: ");
	scanf("%d", &valor);
	int c=contem(cabeca, valor);
	if (c==1){
		printf("O elemento %d esta na lista\n",valor);
	}
	else{
		printf("O elemento %d nao esta na lista\n",valor);
	}
}
