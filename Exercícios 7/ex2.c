#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char nome[50];
    int matricula;
    float p1;
    float p2;
};

struct Escola{
    struct Aluno a;
};

void preenche(struct Aluno* a){
    printf ("Digite o nome do aluno: ");
    scanf ("%s", (*a).nome);
    printf ("Digite a matricula do aluno: ");
    scanf ("%d", &(*a).matricula);
    printf ("Digite a nota na P1: ");
    scanf ("%f", &(*a).p1);
    printf ("Digite a nota na P2: ");
    scanf ("%f", &(*a).p2);
}

void preenche2(struct Escola* e){
    preenche(&(*e).a);
}

int main(){
    struct Escola e;
    preenche2(&e);
    printf ("Nome: %s\nMatricula: %d\nNota P1: %.1f\nNota P2: %.1f\n",e.a.nome,e.a.matricula,e.a.p1,e.a.p2);
}
