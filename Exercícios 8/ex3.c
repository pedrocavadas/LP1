#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, j;
    char v[10][25];
    FILE* f=fopen("D:/Dev-Cpp/Programas feitos/arq.txt", "w");
    for (i=0;i<10;i++){
    	printf("Digite uma frase: ");
        fgets(v[i],25,stdin);
    }
    for (i=0;i<10;i++){
        for (j=0;j<strlen(v[i]);j++){
	    fputc(v[i][j],f);
	}
	fputc(' ',f);
    }
    fclose(f);
}
