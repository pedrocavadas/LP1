#include <stdio.h>

int main(void){
	int sum=0;
	int num;
	while (1){
		printf ("Digite um numero: ");
		scanf ("%d", &num);
		if (num==0){
			break;
		}else{
			sum+=num;
		}
    }
	printf ("A soma dos numeros digitados e %d\n", sum);
	return 0;
}
