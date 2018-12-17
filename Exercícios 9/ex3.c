#include <stdio.h>
#include <stdlib.h>

struct Caixa{
	int valor;
	struct Caixa* prox;
};

void exibe(struct Caixa* caixa){
	while (caixa!=NULL){
		printf("%d->", caixa->valor);
		caixa=caixa->prox;
	}
}

int main(){
	struct Caixa c1,c2,c3,c4,c5;
	
	printf("Digite o valor da primeira caixa: ");
	scanf("%d", &c1.valor);
	c1.prox=&c2;

	printf("Digite o valor da segunda caixa: ");
	scanf("%d", &c2.valor);
	c2.prox=&c3;
	
	printf("Digite o valor da terceira caixa: ");
	scanf("%d", &c3.valor);
	c3.prox=&c4;

	printf("Digite o valor da quarta caixa: ");
	scanf("%d", &c4.valor);
	c4.prox=&c5;

	printf("Digite o valor da quinta caixa: ");
	scanf("%d", &c5.valor);
	c5.prox=NULL;

	exibe(&c1);
}
	
