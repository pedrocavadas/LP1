#include <stdio.h>
#include <stdlib.h>

void preenche(int arr[20][20], int l, int c){
    int i, j;
    for (i=0;i<l;i++){
        for (j=0;j<c;j++){
            printf ("Digite o valor a ser alocado: ");
            scanf ("%d", &arr[i][j]);
        }
    }
}

float media(int arr[20][20], int l, int c){
    int i, j;
    float som=0, med;
    for (i=0;i<l;i++){
        for (j=0;j<c;j++){
            som+=arr[i][j];
        }
    }
    med=(som/(l*c));
    return med;
}
    
int main(){
    int arr[20][20], l, c;
    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);
    preenche(arr, l, c);
    printf("A media dos valores do array e %.2f\n", media(arr, l, c));
}


