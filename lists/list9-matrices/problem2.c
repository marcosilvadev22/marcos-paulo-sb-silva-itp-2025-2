#include <stdio.h>

int main() {
    int M, x;
    scanf("%d", &M);

    int rede[100][100]; // Matriz de adjacência

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &rede[i][j]);
        }
    }
    
    scanf("%d", &x); // Usuário alvo

    // Procurar sugestões (outros usuários 'i')
    for(int i = 0; i < M; i++) {
        if(i == x) continue; // Não sugerir ele mesmo
        
        // Se já são amigos, pula
        if(rede[x][i] == 1) continue;

        // Verificar amigo em comum 'k'
        int tem_comum = 0;
        for(int k = 0; k < M; k++) {
            // Se k é amigo de X  E  k é amigo de i
            if(rede[x][k] == 1 && rede[i][k] == 1) {
                tem_comum = 1;
                break; // Basta um amigo em comum
            }
        }

        if(tem_comum) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}