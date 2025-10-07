#include <stdio.h>

int main() {

    float peso, altura, imc;

    printf("Digite o seu peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);
    printf("Classificacao: ");
    if (imc < 18.5) {
        printf("Abaixo do peso\n"); 
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso normal\n"); 
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Sobrepeso\n");
    } else { 
        printf("Obesidade\n"); 
    }

    return 0;
}