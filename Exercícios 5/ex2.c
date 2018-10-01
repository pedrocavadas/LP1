#include <stdio.h>
#include <stdlib.h>

void compra(int* conta, int valor){
	*conta=*conta-valor;
}

int main(){
	int minha_conta1, minha_conta2, valor;
	int* conta;
	printf ("Digite o saldo da primeira conta: ");
	scanf ("%d", &minha_conta1);
	printf ("Digite o saldo da segunda conta: ");
	scanf ("%d", &minha_conta2);
	printf ("Digite o valor do produto: ");
	scanf ("%d", &valor);
	if (minha_conta1>minha_conta2){
		conta=&minha_conta1;
		compra(conta,valor);
		printf ("Saldo das contas:\nConta 1=%d\nConta 2=%d\n", minha_conta1,minha_conta2);
	}
	else{
		conta=&minha_conta2;
		compra(conta,valor);
		printf ("Saldo das contas:\nConta 1=%d\nConta 2=%d\n", minha_conta1,minha_conta2);
	}
}
