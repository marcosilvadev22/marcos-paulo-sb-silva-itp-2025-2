#include <stdio.h>

int main() {
    int m, n; // m = sorteados, n = apostados
    scanf("%d %d", &m, &n);

    int sorteados[50];
    int aposta[50];

    // Leitura dos sorteados
    for(int i = 0; i < m; i++) {
        scanf("%d", &sorteados[i]);
    }

    // Leitura da aposta
    for(int i = 0; i < n; i++) {
        scanf("%d", &aposta[i]);
    }

    int acertos = 0;

    // Comparação Aninhada
    for(int i = 0; i < n; i++) {       // Para cada número da minha aposta...
        for(int j = 0; j < m; j++) {   // ...verifico todos os sorteados
            if(aposta[i] == sorteados[j]) {
                acertos++;
                break; // Achou, não precisa testar os outros sorteados para este número
            }
        }
    }

    printf("%d\n", acertos);

    return 0;
}