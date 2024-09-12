#include <stdio.h>
int main () {
	int v1[6], i;
	
	
	for (i = 0; i < 6; i++) {
		printf("digite um valor inteiro: ");
		scanf("%d", &v1[i]);
	}
	printf("\nvetor: ");
	for(i = 0; i < 6; i++) {
		printf("%d ", v1[i]);
	}
	return 0;
}
