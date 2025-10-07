#include <stdio.h>

int main() {
    char tipo_consumidor;
    float consumo_kwh, valor_total;
    float taxa_fixa = 15.00;

    printf("Digite o consumo em kWh: ");
    scanf("%f", &consumo_kwh);
    printf("Digite o tipo de consumidor (R - Residencial, C - Comercial, I - Industrial): ");
    scanf(" %c", &tipo_consumidor);

    if (tipo_consumidor == 'R' || tipo_consumidor == 'r') {
        valor_total = (consumo_kwh * 0.60) + taxa_fixa; 
        printf("Valor total da conta Residencial: R$ %.2f\n", valor_total);
    } else if (tipo_consumidor == 'C' || tipo_consumidor == 'c') {
        valor_total = (consumo_kwh * 0.48) + taxa_fixa;
        printf("Valor total da conta Comercial: R$ %.2f\n", valor_total);
    } else if (tipo_consumidor == 'I' || tipo_consumidor == 'i') {
        valor_total = (consumo_kwh * 1.29) + taxa_fixa; 
        printf("Valor total da conta Industrial: R$ %.2f\n", valor_total);
    } else {
        printf("Tipo de consumidor invalido!\n");
    }

    return 0;
}