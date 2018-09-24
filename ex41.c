#include <stdio.h>
#include <stdlib.h>

int eh_primo(int n){
    int i, qtd=0;
    for (i=2;i<n;i++){
        if (n%i==0){
            qtd+=1;
        }
    }
    return qtd;
}
int main(void){
    int n;
    printf ("Digite um numero N: ");
    scanf ("%d", &n);
    int qtd=eh_primo(n);
    if (qtd==0){
        printf ("O numero %d e primo\n", n);
    }
    else{
        printf ("O numero %d nao e primo\n", n);
    }
    return 0;
}


           
           
        
