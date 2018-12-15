#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escreva_string(FILE* f, char* str){
    int i;
    for (i=0;i<strlen(str);i++){
        fputc(str[i], f);
    }
}
int main(){
    char v[25];
    int i,len;
    printf("Digite uma frase: ");
    fgets(v,25,stdin);
    FILE* f=fopen("D:/Dev-Cpp/Programas feitos/arq.txt","w");
    char* str=v;
    escreva_string(f,str);
    fclose(f);
}
