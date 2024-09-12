#include <stdio.h>
int main() {
	int i;
	int v1[] = {1,2,3,4,5};
	int v2[5];
	
	printf("vetor 1: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", v1[i]);
		v2[i] = v1[i] + 5;
	}
	
	printf("\nvetor 2: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", v2[i] );
	}
	return 0;
}
