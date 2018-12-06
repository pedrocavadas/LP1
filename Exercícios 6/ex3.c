#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Ponto{
	int x;
	int y;
};

void preenche(struct Ponto* v){
	int i;
	for(i=0;i<10;i++){
		printf("Digite X: ");
		scanf("%d", &(v[i].x));
		printf("Digite Y: ");
		scanf("%d", &(v[i].y));
	}
}

struct Ponto calcDist(struct Ponto* v){
	int i;
	float dist=0;
	struct Ponto ptdist;
	for (i=0;i<10;i++){
		if (dist<sqrt((pow(v[i].x, 2)) + pow(v[i].y, 2))){
			dist=sqrt((pow(v[i].x, 2) + pow(v[i].y, 2)));
			ptdist=v[i];
		}
	}
	return ptdist;
}
int main(){
	struct Ponto v[10];
	preenche(v);
	struct Ponto ptdist=calcDist(v);
	printf("O ponto mais distante de (0,0) e (%d,%d)", ptdist.x, ptdist.y);
}
