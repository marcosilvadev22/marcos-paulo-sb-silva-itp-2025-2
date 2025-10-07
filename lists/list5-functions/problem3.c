#include <stdio.h>
#include <math.h>

float calcularAltura(float x, float y) {
    return sin(cos(y) + x) + cos(y + sin(x));
}

int ehPontoSeguro(float x, float y) {
    float altura;

    altura = calcularAltura(x, y);
    if (altura < 0 || altura > 2) return 0;
    altura = calcularAltura(x + 0.2, y + 0.2);
    if (altura < 0 || altura > 2) return 0;
    altura = calcularAltura(x - 0.2, y - 0.2);
    if (altura < 0 || altura > 2) return 0;
    altura = calcularAltura(x + 0.2, y - 0.2);
    if (altura < 0 || altura > 2) return 0;
    altura = calcularAltura(x - 0.2, y + 0.2);
    if (altura < 0 || altura > 2) return 0;
    return 1;
}

int main() {
    float x_pouso, y_pouso;

    printf("Digite a coordenada de pouso (x y): ");
    scanf("%f %f", &x_pouso, &y_pouso);
    if (!ehPontoSeguro(x_pouso, y_pouso)) {
        printf("troque de coordenada\n");
    } else {
        int vizinhos_seguros = 0;
        if (ehPontoSeguro(x_pouso + 2, y_pouso)) vizinhos_seguros++;
        if (ehPontoSeguro(x_pouso - 2, y_pouso)) vizinhos_seguros++;
        if (ehPontoSeguro(x_pouso, y_pouso + 2)) vizinhos_seguros++;
        if (ehPontoSeguro(x_pouso, y_pouso - 2)) vizinhos_seguros++;
        if (vizinhos_seguros <= 1) {
            printf("inseguro\n"); 
        } else if (vizinhos_seguros <= 3) {
            printf("relativamente seguro\n"); 
        } else { 
            printf("seguro\n"); 
        }
    }

    return 0;
}