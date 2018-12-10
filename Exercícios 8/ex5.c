#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
	int sub;
	union {
		char nome[50];
		long mat;
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
		scanf("%ld", &(*a).id.mat);
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
	FILE* f=fopen("/tmp/arq-01.txt","wb");
	if ((e.a.sub)==1){
		fwrite(&e.a.id.nome, sizeof(char), strlen(e.a.id.nome)+1,f);
	}
	else{
		fwrite(&e.a.id.mat, sizeof(long), 1, f);
	}
	fwrite(&e.nome, sizeof(char), strlen(e.nome)+1, f);
	fwrite(&e.bairro, sizeof(char), strlen(e.bairro)+1, f);
	fwrite(&e.a.p1, sizeof(float), 1, f);
	fwrite(&e.a.p2, sizeof(float), 1, f);
	fclose(f);
	struct Escola b;
	printf("Dados do aluno: \n");
	FILE* p=fopen("/tmp/arq-01.txt","rb");
	if (e.a.sub==1){
		fread(&b.a.id.nome, sizeof(char), strlen(e.a.id.nome)+1, p);
	}
	else{
		fread(&b.a.id.mat, sizeof(long), 1, p);
	}
	fread(&b.nome, sizeof(char), strlen(e.nome)+1, p);
	fread(&b.bairro, sizeof(char), strlen(e.bairro)+1, p);
	fread(&b.a.p1, sizeof(float), 1, p);
	fread(&b.a.p2, sizeof(float), 1, p);
	if (e.a.sub==1){
		printf("Nome: %s\nEscola: %s\nBairro: %s\nP1: %.2f\nP2: %.2f\n", b.a.id.nome, b.nome, b.bairro, b.a.p1, b.a.p2);
	}
	else{
		printf("Matricula: %ld\nEscola: %s\nBairro: %s\nP1: %.2f\nP2: %.2f\n", b.a.id.mat, b.nome, b.bairro, b.a.p1, b.a.p2);
	}
	fclose(p);
}
