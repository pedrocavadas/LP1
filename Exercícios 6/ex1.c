#include <stdio.h>
#include <stdlib.h>

void preenche(int* vet, int n){
    int i;
    for (i=0;i<n;i++){
        printf ("Digite o valor a ser alocado: ");
        scanf ("%d", &*(vet+i));
    }
    printf ("Vetor preenchido com sucesso!\n");
}
float media(int* vet, int n){
    int i, med, som=0;
    for (i=0;i<n;i++){
        som+=*(vet+i);
    }
    med=(som/n);
    printf ("A media entre os valores do vetor e: %d\n", med);
}
int main(){
    int vet[100],n;
    printf ("Digite o numero N: ");
    scanf ("%d", &n);
    preenche(vet, n);
    float x=media(vet, n);
}
