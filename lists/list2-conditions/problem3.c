#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0; 

    printf("Sua media foi: %.1f\n", media);

    if (media >= 7.0) {
        printf("Situacao: Aprovado!\n");
    } else if (media < 4.0) {
        printf("Situacao: Reprovado.\n"); 
    } else { 
        printf("Situacao: Em recuperacao.\n"); 
        float nota_final_necessaria = (5.0 * 2) - media; 
        printf("Voce precisa tirar %.1f na prova final para ser aprovado.\n", nota_final_necessaria);
    }

    return 0;
}