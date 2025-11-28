#include <stdio.h>

int main() {
    int M, X, Z;
    scanf("%d", &M);
    int custos[10][10];

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &custos[i][j]);
        }
    }
    scanf("%d %d", &X, &Z);

    // 1. Custo Direto Inicial
    int menor_custo = custos[X][Z];
    int melhor_inter = -1; // -1 indica voo direto

    // 2. Testar escalas (cidade k)
    for(int k = 0; k < M; k++) {
        if(k == X || k == Z) continue; // Escala não pode ser origem nem destino

        int custo_escala = custos[X][k] + custos[k][Z];
        
        if(custo_escala < menor_custo) {
            menor_custo = custo_escala;
            melhor_inter = k;
        }
    }

    if(melhor_inter == -1) {
        printf("%d-%d R$%d\n", X, Z, menor_custo);
    } else {
        printf("%d-%d-%d R$%d\n", X, melhor_inter, Z, menor_custo);
    }

    return 0;
}