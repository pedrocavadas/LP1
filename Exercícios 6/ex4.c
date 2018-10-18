#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlen1(char* str){
	int len;
	len=strlen(str);
	return len;
}
int main(){
	char str[30];
	printf ("Digite a string: ");
	scanf ("%s", str);
	int len=strlen1(str);
	printf ("O tamanho de |%s| e |%d|\n", str, len);
}
