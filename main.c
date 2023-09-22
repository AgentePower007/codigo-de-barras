#include <stdio.h>

void desenharBarra(int valor) {
	int i=0;
    for (i = 0; i < valor; i++) {
        printf("#");
    }
    printf("\n");
}

int main() {
    int dados[10];
    int i=0;
    
    printf("Digite os valores para os 10 segmentos do gráfico de barras:\n");

    for (i = 0; i < 10; i++) {
        printf("Segmento %d: ", i + 1);
        scanf("%d", &dados[i]);
    }

    printf("\nGráfico de Barras:\n");

    for ( i = 0; i < 10; i++) {
        printf("Segmento %d: ", i + 1);
        desenharBarra(dados[i]);
    }

    return 0;
}
