#include <stdio.h>
#include <stdlib.h>

int main(void){
	char temps[5];
	int i, c, cnt=0, som=0;
	for (i=0;i<5;i++){
		printf ("Digite a temperatura: ");
		scanf ("%d", &temps[i]);
		som+=temps[i];
	}
	int med=(som/5);
	for (c=0;c<5;c++){
		if (temps[c]>med){
		   cnt+=1;
	    }
	}
	printf ("A media das temperaturas e %d\nExistem %d temperaturas acima da media", med, cnt);
	return 0;
}
