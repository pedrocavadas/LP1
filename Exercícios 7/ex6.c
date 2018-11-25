#include <stdio.h>
#include <stdlib.h>

struct Aluno{
	int sub;
	union {
		char nome[50];
		int mat;
	} id;
	float p1;
	float p2;
};

struct Escola{
	char nome[50];
	char bairro[50];
	struct Aluno a;
};

void preenche2(struct Aluno* a){
	printf ("Qual sera a identificacao do aluno? Digite 1 para nome, e 2 para matricula: ");
	scanf ("%d", &(*a).sub);
	if ((*a).sub==1){
		printf ("Digite o nome: ");
		scanf("%s", (*a).id.nome);
	}
	else{
		printf ("Digite a matricula: ");
		scanf("%d", &(*a).id.mat);
	}
	printf ("Digite sua nota na P1: ");
	scanf ("%f", &(*a).p1);
	printf ("Digite a sua nota na P2: ");
	scanf ("%f", &(*a).p2);
}

void preenche(struct Escola* e){
	printf ("Digite o nome da escola: ");
	scanf ("%s", (*e).nome);
	printf ("Digite o bairro em que ela se situa: ");
	scanf ("%s", (*e).bairro);
	preenche2(&(*e).a);
}

int main(){
	struct Escola e;
	preenche(&e);
	if ((e.a.sub)==1){
		printf ("Aluno: %s\nEscola: %s\nBairro: %s\nP1: %.1f\nP2: %.1f\n", e.a.id.nome, e.nome, e.bairro, e.a.p1, e.a.p2);
	}
	else{
		printf ("Matricula: %d\nEscola: %s\nBairro: %s\nP1: %.1f\nP2: %.1f\n", e.a.id.mat, e.nome, e.bairro, e.a.p1, e.a.p2);
	}
}
