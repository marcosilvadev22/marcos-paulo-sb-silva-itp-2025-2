#include <stdio.h>

int main() {
    int n_pontos;

    printf("Digite o numero de pontos do terreno: ");
    scanf("%d", &n_pontos);

    int terreno[n_pontos];
    printf("Digite as alturas do terreno: ");
    for (int i = 0; i < n_pontos; i++) {
        scanf("%1d", &terreno[i]);
    }

    int altura_maxima = 0;
    for (int i = 0; i < n_pontos; i++) {
        if (terreno[i] > altura_maxima) {
            altura_maxima = terreno[i];
        }
    }

    int indice_ponto1 = -1;
    int indice_ponto2 = -1;
    for (int i = 0; i < n_pontos; i++) {
        if (terreno[i] == altura_maxima) {
            if (indice_ponto1 == -1) { 
                indice_ponto1 = i;
            } else { 
                indice_ponto2 = i;
            }
        }
    }
    
    int comprimento = indice_ponto2 - indice_ponto1;
    printf("Comprimento da ponte: %d\n", comprimento);

    return 0;
}