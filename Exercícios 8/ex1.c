#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char v[25];
    int i,len;
    printf("Digite uma frase: ");
    fgets(v,25,stdin);
    FILE* f=fopen("D:/Dev-Cpp/Programas feitos/arq.txt","w");
    for (i=0;i<strlen(v);i++){
        fputc(v[i], f);
    }
    fclose(f);
}
