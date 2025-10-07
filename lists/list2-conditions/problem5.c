#include <stdio.h>

int main() {
    float valor_compra, valor_desconto, valor_final;
    int porcentagem_desconto = 0;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor_compra);

    if (valor_compra > 1000.00) {
        porcentagem_desconto = 20; 
        valor_desconto = valor_compra * 0.20;
    } else if (valor_compra > 500.00) {
        porcentagem_desconto = 15; 
        valor_desconto = valor_compra * 0.15;
    } else if (valor_compra > 100.00) {
        porcentagem_desconto = 10;
        valor_desconto = valor_compra * 0.10;
    } else {
        valor_desconto = 0;
    }

    valor_final = valor_compra - valor_desconto;

    printf("Porcentagem de desconto aplicada: %d%%\n", porcentagem_desconto); 
    printf("Valor do desconto: R$ %.2f\n", valor_desconto); 
    printf("Valor final a ser pago: R$ %.2f\n", valor_final); 

    return 0;
}