#include <stdio.h>

int main() {
    float num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("\n--- Resultados das Operacoes ---\n");

    resultado = num1 + num2;
    printf("Soma:           %.2f + %.2f = %.2f\n", num1, num2, resultado);

    resultado = num1 - num2;
    printf("Subtracao:      %.2f - %.2f = %.2f\n", num1, num2, resultado);

    resultado = num1 * num2;
    printf("Multiplicacao:  %.2f * %.2f = %.2f\n", num1, num2, resultado);

    if (num2 != 0.0f) {
        resultado = num1 / num2;
        printf("Divisao:        %.2f / %.2f = %.2f\n", num1, num2, resultado);
    } else {
        printf("Divisao:        Erro! Nao e possivel dividir por zero.\n");
    }
    
    return 0;
}