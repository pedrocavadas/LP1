#include <stdio.h>
#include <stdlib.h>

void troca(int* p1, int* p2){
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("TROCA REALIZADA\n%d %d", *p1,*p2);
}

int main(){
	int x, y;
	int *p1, *p2;
	printf ("Digite o primeiro numero: ");
	scanf ("%d", &x);
	printf ("Digite o segundo numero: ");
	scanf ("%d", &y);
    p1=&x;
    p2=&y;
    printf("%d %d\n", x,y);
	troca(p1,p2);
}
