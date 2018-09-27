#include <stdio.h>
#include <stdlib.h>

int compra(int* conta, int valor){
	int saldo;
	saldo=(*conta-valor);
	return saldo;
}

int main(){
	int c1, c2, valor;
	int* conta;
	printf ("Digite o saldo da primeira conta: ");
	scanf ("%d", &c1);
	printf ("Digite o saldo da segunda conta: ");
	scanf ("%d", &c2);
	printf ("Digite o valor do produto: ");
	scanf ("%d", &valor);
	if (c1>c2){
		conta=&c1;
		int saldo=compra(conta,valor);
		printf ("Saldo das contas:\nConta 1=%d\nConta 2=%d", saldo,c2);
	}
	else{
		conta=&c2;
		int saldo=compra(conta,valor);
		printf ("Saldo das contas:\nConta 1=%d\nConta 2=%d", c1,saldo);
	}
}
