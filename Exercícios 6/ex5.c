#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlen1(char* str){
	int len;
	len=strlen(str);
	return len;
}
void strjoin(char* d, char* o1, char* o2){
	int i, j, o=0;
	int len1=strlen1(o1);
	int len2=strlen1(o2);
	for (i=0;i<len1;i++){
		d[i]=o1[i];
		o+=1;
	}
	for (j=0;j<len2;j++){
		d[o]=o2[j];
		o+=1;
	}
	d[o]='\0';
	printf ("A string de destino e |%s|\n", d);
}
int main(){
	char d[100], o1[21], p2[21];
	printf ("Digite a primeira string de origem: ");
	scanf ("%s", o1);
	printf ("Digite a segunda string de origem: ");
	scanf ("%s", o2);
	strjoin(d,o1,o2);
}
