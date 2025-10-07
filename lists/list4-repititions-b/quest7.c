#include <stdio.h>

int main() {
    int a, b;
    do {
        printf("Digite o valor de A: ");
        scanf("%d", &a);
        printf("Digite o valor de B (deve ser menor que A): ");
        scanf("%d", &b);

        if (a <= b) {
            printf("Erro! 'A' deve ser maior que 'B'. Tente novamente.\n");
        }
    } while (a <= b);

    printf("Numeros primos entre %d e %d:\n", b, a);

    for (int num_atual = b; num_atual <= a; num_atual++) {
        int divisores = 0;

        if (num_atual < 2) {
            continue; 
        }

        for (int i = 1; i <= num_atual; i++) {
            if (num_atual % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", num_atual);
        }
    }
    printf("\n");

    return 0;
}