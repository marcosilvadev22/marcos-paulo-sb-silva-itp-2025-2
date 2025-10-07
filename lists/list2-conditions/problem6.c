#include <stdio.h>

int main() {
    char febre, dor_cabeca, dor_corpo, tosse;

    printf("Tem febre? (S/N): ");
    scanf(" %c", &febre);
    printf("Tem dor de cabeca? (S/N): ");
    scanf(" %c", &dor_cabeca);
    printf("Tem dor no corpo? (S/N): ");
    scanf(" %c", &dor_corpo);
    printf("Tem tosse? (S/N): ");
    scanf(" %c", &tosse);

    if (febre == 'S' && dor_cabeca == 'S' && dor_corpo == 'S') {
        printf("Diagnostico: Possivel gripe\n"); 
    } else if (tosse == 'S' && febre == 'S') {
        printf("Diagnostico: Possivel resfriado\n"); 
    } else if (dor_cabeca == 'S' && febre == 'N' && dor_corpo == 'N' && tosse == 'N') {
        printf("Diagnostico: Possivel enxaqueca\n"); 
    } else if (febre == 'S' && dor_cabeca == 'N' && dor_corpo == 'N' && tosse == 'N') {
        printf("Diagnostico: Consulte um medico\n"); 
    } else if (febre == 'N' && dor_cabeca == 'N' && dor_corpo == 'N' && tosse == 'N') {
        printf("Diagnostico: Voce parece estar bem\n"); 
    } else {
        printf("Diagnostico: Consulte um medico para avaliacao\n"); 
    }

    return 0;
}