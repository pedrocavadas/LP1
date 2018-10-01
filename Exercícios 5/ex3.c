#include <stdio.h>
#include <stdlib.h>

void compra(int* conta,int valor){
    *conta=*conta-valor;
}
int main(){
    int valor, i, minha_conta1, minha_conta2, compras[]={100,50,80,30,20};
    int* conta;
    printf ("Digite o saldo da primeira conta: ");
    scanf ("%d", &minha_conta1);
    printf ("Digite o saldo da segunda conta: ");
    scanf ("%d", &minha_conta2);
    for (i=0;i<5;i++){
        if (minha_conta1>minha_conta2){
            conta=&minha_conta1;
            valor=compras[i];
            compra(conta,valor);
            printf ("SALDO ATUALIZADO\nSaldo da conta 1: R$%d,00\nSaldo da conta 2: R$%d,00\n", minha_conta1,minha_conta2);
        }
        else{
            conta=&minha_conta2;
            valor=compras[i];
            compra(conta,valor);
            printf ("SALDO ATUALIZADO\nSaldo da conta 1: R$%d,00\nSaldo da conta 2: R$%d,00\n", minha_conta1,minha_conta2);
        }
    }
}

