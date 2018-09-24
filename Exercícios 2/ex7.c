#include <stdio.h>
#include <stdlib.h>

int main(void){
	char nome, mais, menos;
	int v, e, d, pts, P=0, p=100;
	int c=0;
	while (c<3){
		printf ("Digite o nome do time: ");
		scanf ("%s", &nome);
		printf ("Digite o numero de vitorias: ");
		scanf ("%d", &v);
		printf ("Digite o numero de empates: ");
		scanf ("%d", &e);
		printf ("Digite o numero de derrotas: ");
		scanf ("%d", &d);
		pts=(v*3) + e;
		if (pts>P){
			P=pts;
			mais=nome;
			c+=1;
		}
		else if (pts<p){
			p=pts;
			menos=nome;
			c+=1;
		}
		else{
			c+=1;
		}
	}
	printf ("O time com mais pontos e %s, com %d pontos", mais, P);
	printf ("O time com menos pontos e %s, com %d pontos", menos, p);
	return 0;
}
