#include <stdio.h>

int main() {

    int mapa[10];
    int visitadas[10] = {0}; 

    // 2. Lê os valores do mapa
    printf("Digite as indicacoes do mapa para as 10 ilhas: ");
    for (int i = 0; i < 10; i++) {
        scanf("%1d", &mapa[i]);
    }

    int ilha_atual = 0;

    while (1) { 
        if (visitadas[ilha_atual] == 1) {
            printf("Primeira ilha visitada duas vezes: %d\n", ilha_atual);
            break; 
        }

        visitadas[ilha_atual] = 1;

        ilha_atual = mapa[ilha_atual];
    }

    return 0;
}