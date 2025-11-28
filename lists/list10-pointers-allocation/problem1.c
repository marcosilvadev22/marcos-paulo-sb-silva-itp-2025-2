#include <stdio.h>
#include <stdlib.h> // Necessário para malloc e free

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if(n1 != n2) {
        printf("dimensoes incompativeis\n");
        return 0;
    }

    // Alocação Dinâmica
    int *u = (int*) malloc(n1 * sizeof(int));
    int *v = (int*) malloc(n2 * sizeof(int));

    // Leitura u
    for(int i = 0; i < n1; i++) scanf("%d", &u[i]);
    // Leitura v
    for(int i = 0; i < n2; i++) scanf("%d", &v[i]);

    // Soma e Impressão
    for(int i = 0; i < n1; i++) {
        printf("%d ", u[i] + v[i]);
    }
    printf("\n");

    // Liberação de memória
    free(u);
    free(v);

    return 0;
}