#include <stdio.h>
#include <string.h>

int main() {
    char tabuleiro[21]; // Max 20 chars + \0
    int indice;

    // Leitura da string e do índice
    scanf("%s", tabuleiro);
    scanf("%d", &indice);

    int tamanho = strlen(tabuleiro);

    // Caso 1: O próprio índice é uma bomba
    if (tabuleiro[indice] == 'x') {
        printf("bum!\n");
    } 
    // Caso 2: Contar bombas vizinhas
    else {
        int bombas = 0;
        
        // Verifica vizinho da esquerda (se não for o primeiro elemento)
        if (indice > 0 && tabuleiro[indice - 1] == 'x') {
            bombas++;
        }
        
        // Verifica vizinho da direita (se não for o último elemento)
        if (indice < tamanho - 1 && tabuleiro[indice + 1] == 'x') {
            bombas++;
        }
        
        printf("%d\n", bombas);
    }

    return 0;
}