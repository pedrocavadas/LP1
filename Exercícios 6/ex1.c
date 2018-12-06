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
    int i, som=0;
    float med;
    for (i=0;i<n;i++){
        som+=*(vet+i);
    }
    med=(som/n);
    return med;
}
int main(){
    int vet[100],n;
    printf ("Digite o numero N: ");
    scanf ("%d", &n);
    preenche(vet, n);
	float med=media(vet,n);
	printf ("A media entre os valores do vetor e: %.2f\n", med);
}
