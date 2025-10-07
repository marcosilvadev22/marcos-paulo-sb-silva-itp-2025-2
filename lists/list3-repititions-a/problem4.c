#include <stdio.h>
#include <math.h> 

float calcular_distancia(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    float x_atual, y_atual;
    float x_anterior, y_anterior;
    float pontuacao_total = 0;

    printf("Digite as coordenadas dos 10 lancamentos (x y):\n");

    for (int i = 1; i <= 10; i++) {
        printf("Lancamento %d: ", i);
        scanf("%f %f", &x_atual, &y_atual);

        float dist_centro = calcular_distancia(x_atual, y_atual, 0, 0);
        if (dist_centro <= 1.0) {
            pontuacao_total += 10;
        } else if (dist_centro <= 2.0) {
            pontuacao_total += 6;
        } else if (dist_centro <= 3.0) {
            pontuacao_total += 4;
        }

        if (i > 1) {
            float dist_anterior = calcular_distancia(x_atual, y_atual, x_anterior, y_anterior);
            if (dist_anterior <= 1.0) {
                pontuacao_total += 5;
            } else if (dist_anterior <= 2.0) {
                pontuacao_total += 3;
            } else if (dist_anterior <= 3.0) {
                pontuacao_total += 2;
            }
        }
        
        x_anterior = x_atual;
        y_anterior = y_atual;
    }

    printf("Pontuacao total: %.0f pontos.\n", pontuacao_total);

    return 0;
}