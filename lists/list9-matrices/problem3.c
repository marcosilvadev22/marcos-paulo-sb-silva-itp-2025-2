#include <stdio.h>

int main() {
    int M;
    scanf("%d", &M);
    int tabela[20][20];

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &tabela[i][j]);
        }
    }

    int empates = 0;
    // Compara cada time i com time j
    for(int i = 0; i < M; i++) {
        for(int j = i + 1; j < M; j++) { // j > i evita repetição e diagonal
            // m[i][j] são gols de i contra j
            // m[j][i] são gols de j contra i
            if(tabela[i][j] == tabela[j][i]) {
                empates++;
            }
        }
    }

    printf("%d\n", empates);
    return 0;
}