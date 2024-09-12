#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    printf("Digite os valores da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nValores pares e suas posicoes:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                printf("Valor %d encontrado na posicao [%d][%d]\n", matriz[i][j], i, j);
            }
        }
    }

    return 0;
}

