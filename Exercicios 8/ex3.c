#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, j;
    char v[10][25];
    FILE* f=fopen("/tmp/arq-02.txt", "w");
    for (i=0;i<10;i++){
    	printf("Digite uma frase: ");
        scanf("%s", v[i]);
    }
    for (i=0;i<10;i++){
        for (j=0;j<strlen(v[i]);j++){
	    fputc(v[i][j],f);
	}
	fputc(' ',f);
    }
    fclose(f);
}
    

