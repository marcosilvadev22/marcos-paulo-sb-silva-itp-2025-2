#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int campo[10][10]; // Tamanho máximo conforme enunciado

    // Leitura da matriz
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &campo[i][j]);
        }
    }

    int ferteis_irrigados = 0;
    int ferteis_secos = 0;

    // Processamento
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            // Se o setor é fértil (1), verificamos se tem irrigador vizinho
            if(campo[i][j] == 1) {
                int irrigado = 0;
                
                // Verifica Norte (i-1), Sul (i+1), Oeste (j-1), Leste (j+1)
                // Checa se o índice existe E se tem um irrigador (2)
                if (i > 0 && campo[i-1][j] == 2) irrigado = 1;
                else if (i < M-1 && campo[i+1][j] == 2) irrigado = 1;
                else if (j > 0 && campo[i][j-1] == 2) irrigado = 1;
                else if (j < N-1 && campo[i][j+1] == 2) irrigado = 1;

                if(irrigado) {
                    ferteis_irrigados++;
                } else {
                    ferteis_secos++;
                }
            }
        }
    }

    printf("%d %d\n", ferteis_irrigados, ferteis_secos);
    return 0;
}