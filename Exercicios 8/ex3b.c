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
    FILE* f=fopen("/tmp/arq-02.txt", "w");
    for (i=0;i<10;i++){
    	printf("Digite uma frase: ");
        scanf("%s", str[i]);
    }
    for (i=0;i<10;i++){
        escreve_string(f,str[i]);
        fputc(' ',f);
    }
    fclose(f);
}
    
