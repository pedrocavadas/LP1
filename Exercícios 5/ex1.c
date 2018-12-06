#include <stdio.h>
#include <stdlib.h>

void pont(int* p){
	*p=(*p-50);
}

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
	pont(p);
        printf ("NOVO VALOR\nA=%d B=%d\n", *p,b);
    }
    else{
        p=&b;
	pont(p);
	printf ("NOVO VALOR\nA=%d B=%d\n", a,*p);
    }
}
