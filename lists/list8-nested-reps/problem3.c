#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Vetores para guardar a posição de largada e chegada de cada piloto.
    // Tamanho 21 pois os pilotos são de 1 a 20.
    int pos_largada[21];
    int pos_chegada[21];
    int piloto_id;

    // Leitura da Largada
    // Ex: Se leio o piloto 5 na iteração 0 (1º lugar), salvo pos_largada[5] = 0
    for(int i = 0; i < n; i++) {
        scanf("%d", &piloto_id);
        pos_largada[piloto_id] = i;
    }

    // Leitura da Chegada
    for(int i = 0; i < n; i++) {
        scanf("%d", &piloto_id);
        pos_chegada[piloto_id] = i;
    }

    int maior_ganho = -1; // Começa negativo
    int piloto_destaque = -1;
    int empate = 0;

    // Calcular ganho para cada piloto (de 1 a n)
    for(int p = 1; p <= n; p++) {
        // Ganho = Posição Inicial - Posição Final (quanto maior, melhor)
        int ganho = pos_largada[p] - pos_chegada[p];

        if (ganho > maior_ganho) {
            maior_ganho = ganho;
            piloto_destaque = p;
            empate = 0; // Novo líder, reseta empate
        } else if (ganho == maior_ganho) {
            empate = 1; // Houve empate no maior ganho
        }
    }

    // Regras de saída: se ninguém ganhou posições (ganho <= 0) ou empate
    if (maior_ganho <= 0 || empate) {
        printf("empate\n");
    } else {
        printf("%d\n", piloto_destaque);
    }

    return 0;
}