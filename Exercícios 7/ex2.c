#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char nome[50];
    int matricula;
    float p1;
    float p2;
};

struct Escola{
    char nome[50];
    char bairro[50];
    struct Aluno a;
};

void preenche2(struct Aluno* a){
    printf ("Digite o nome do aluno: ");
    scanf ("%s", (*a).nome);
    printf ("Digite a matricula: ");
    scanf ("%d", &(*a).matricula);
    printf ("Digite sua nota na P1: ");
    scanf ("%f", &(*a).p1);
    printf ("Digite sua nota na P2: ");
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
    struct Aluno a;
    preenche(&e);
    printf ("Aluno: %s\nMatricula: %d\nEscola: %s\nBairro: %s\nP1: %.1f\nP2: %.1f\n", e.a.nome,e.a.matricula,e.nome,e.bairro,e.a.p1,e.a.p2);
}
    


















