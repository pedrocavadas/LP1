#include <stdio.h>
#include <stdlib.h>

struct Posicao{
	int x;
	int y;
};

struct Personagem{
    int id;
    struct Posicao c;
    int pts;
};

void preenche(struct Personagem* p){
	int i;
	for(i=0;i<10;i++){	
		printf("Digite a identidade do personagem: ");
		scanf("%d", &(p[i].id));
		printf("Digite a coordenada X de sua posicao: ");
		scanf("%d", &(p[i].c.x));
		printf("Digite a coordenada Y de sua posicao: ");
		scanf("%d", &(p[i].c.y));
		p[i].pts=0;
	}
}

int main(){
	struct Personagem p[10];
	preenche(p);
}
