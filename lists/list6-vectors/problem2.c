#include <stdio.h>

int main() {
    int total_figurinhas, tenho_figurinhas;

    printf("Digite o total de figurinhas do album e quantas voce tem: ");
    scanf("%d %d", &total_figurinhas, &tenho_figurinhas);

    int album[total_figurinhas + 1];
    for (int i = 0; i <= total_figurinhas; i++) {
        album[i] = 0;
    }

    printf("Digite os numeros das figurinhas que voce tem: ");
    for (int i = 0; i < tenho_figurinhas; i++) {
        int numero_figurinha;
        scanf("%d", &numero_figurinha);
        album[numero_figurinha] = 1; 
    }

    printf("Figurinhas faltando: ");
    for (int i = 1; i <= total_figurinhas; i++) {
        if (album[i] == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}