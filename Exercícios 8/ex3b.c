#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escreve_string(FILE* f, char* str){
    int i,j;
    for (i=0;i<strlen(str);i++){
        fputc(str[i],f);
    }
    
}
int main(){
    int i;
    char str[10][25];
    FILE* f=fopen("D:/Dev-Cpp/Programas feitos/arq.txt", "w");
    for (i=0;i<10;i++){
    	printf("Digite uma frase: ");
        fgets(str[i],25,stdin);
    }
    for (i=0;i<10;i++){
        escreve_string(f,str[i]);
        fputc(' ',f);
    }
    fclose(f);
}
