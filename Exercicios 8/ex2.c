#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i=0;
    char v[25];
    FILE* f=fopen("/tmp/arq-01.txt","r");
    v[i]=fgetc(f);
    while (v[i]!=EOF){
        i++;
        frase[i]=fgetc(f);
    }
    frase[i]='\0';
    fclose(f);
    printf("%s",frase);
}
    
