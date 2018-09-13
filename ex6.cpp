#include <stdio.h>
#include <math.h>

int main(void){
	int n;
	int i=1;
	int sum=0;
	printf ("Digite N: ");
	scanf ("%d", &n);
	while (i<n+1) {
		sum+=pow (i, 2);
		i+=1;
	}
	printf ("O somatorio e %d", sum);
	return 0;
}
