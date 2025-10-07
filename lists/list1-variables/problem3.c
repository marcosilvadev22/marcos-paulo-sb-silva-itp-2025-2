#include <stdio.h>
#include <math.h> 

int main() {
    float capital_inicial, taxa_juros, montante_final;
    int tempo_anos;

    printf("Digite o capital inicial: ");
    scanf("%f", &capital_inicial);

    printf("Digite a taxa de juros (em porcentagem): ");
    scanf("%f", &taxa_juros);

    printf("Digite o tempo (em anos): ");
    scanf("%d", &tempo_anos);

    montante_final = capital_inicial * pow((1 + taxa_juros / 100), tempo_anos);

    printf("O montante final sera de: R$ %.2f\n", montante_final);

    return 0;
}