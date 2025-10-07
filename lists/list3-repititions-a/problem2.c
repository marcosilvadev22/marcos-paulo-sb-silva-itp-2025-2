#include <stdio.h>
#include <math.h> 

float calcular_distancia(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    float aranha_x, aranha_y, teia_max, alvo_x, alvo_y;
    int n_alvos;
    int conseguiu_tudo = 1; 

    printf("Digite a coordenada inicial do Homem-Aranha (x y): ");
    scanf("%f %f", &aranha_x, &aranha_y);
    printf("Digite o comprimento maximo da teia: ");
    scanf("%f", &teia_max);
    printf("Digite a quantidade de alvos: ");
    scanf("%i", &n_alvos);

    for (int i = 1; i <= n_alvos; i++) {
        printf("Digite a coordenada do alvo %d (x y): ", i);
        scanf("%f %f", &alvo_x, &alvo_y);

        float distancia = calcular_distancia(aranha_x, aranha_y, alvo_x, alvo_y);

        if (distancia <= teia_max) {
            aranha_x = (2 * alvo_x) - aranha_x;
        } else {
            conseguiu_tudo = 0;
            break;
        }
    }

    if (conseguiu_tudo == 1) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}