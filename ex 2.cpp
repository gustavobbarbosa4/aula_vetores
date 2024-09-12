#include <stdio.h>
int main () {
	int i;
	int v1[7];
	int v2[7];
	
	for (i = 0; i < 6; i++) {
		printf("digite um valor inteiro: ");
		scanf("%d", &v1[i]);
	}
		printf("\nvetor: ");
	for(i = 0; i < 6; i++) {
		printf("%d ", v1[i]);
	}

    for(i = 0; i < 6; i++){
    	v2[i] = v1[i] * v1[i];
	printf("\nvetor quadrado: %d ", v2[i]);
    }
	
	return 0;
}
