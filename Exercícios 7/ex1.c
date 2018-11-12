#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char nome[50];
    int matricula;
    float p1;
    float p2;
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

int main(){
    struct Aluno a;
    preenche(&a);
    printf ("Nome: %s\nMatricula: %d\nNota P1: %.1f\nNota P2: %.1f\n",a.nome,a.matricula,a.p1,a.p2);
}
