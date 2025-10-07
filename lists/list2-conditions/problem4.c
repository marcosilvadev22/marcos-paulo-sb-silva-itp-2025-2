#include <stdio.h>

int main() {
    char jogador1, jogador2;

    printf("Jogador 1, digite sua jogada (P - Pedra, A - Papel, T - Tesoura): ");
    scanf(" %c", &jogador1);
    printf("Jogador 2, digite sua jogada (P - Pedra, A - Papel, T - Tesoura): ");
    scanf(" %c", &jogador2);

    if (jogador1 == jogador2) {
        printf("Empate, joguem novamente!\n"); 
    } else if ((jogador1 == 'P' && jogador2 == 'T') ||
               (jogador1 == 'T' && jogador2 == 'A') || 
               (jogador1 == 'A' && jogador2 == 'P')) { 
        printf("Parabéns Jogador 1, você venceu!\n");
    } else {
        printf("Parabéns Jogador 2, você venceu!\n");
    }

    return 0;
}