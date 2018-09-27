#include <stdio.h>
#include <stdlib.h>

int pont(int a, int b){
	int nv;
	int* p;
	if (a>b){
		p=&a;
		nv=(*p-50);
		printf ("A=%d B=%d\n", nv,b);
	}
	else{
		p=&b;
		nv=(*p-50);
		printf ("A=%d B=%d\n", a,nv);
	}
}
int main(){
	int a,b;
	printf ("Digite um numero: ");
	scanf ("%d", &a);
    printf ("Digite outro numero: ");
    scanf ("%d", &b);
    printf ("A=%d B=%d\n", a,b);
    int x=pont(a,b);
}
