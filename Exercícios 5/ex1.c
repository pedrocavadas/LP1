#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    int* p;
    printf ("Digite um numero: ");
    scanf ("%d", &a);
    printf ("Digite outro numero: ");
    scanf ("%d", &b);
    printf ("A=%d B=%d\n", a,b);
    if (a>b){
        p=&a;
		*p=a-50;
    }
    else{
        p=&b;
		*p=b-50;
    }
    printf("NOVO VALOR:\nA=%d B=%d\n", a,b);
}
