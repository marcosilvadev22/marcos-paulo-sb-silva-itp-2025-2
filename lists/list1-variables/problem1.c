#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o seu peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("Seu Indice de Massa Corporal (IMC) e: %.2f\n", imc);

    return 0;
}