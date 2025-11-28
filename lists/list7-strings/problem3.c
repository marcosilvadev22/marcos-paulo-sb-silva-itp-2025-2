#include <stdio.h>
#include <string.h>

int main() {
    char nome_alvo[11];
    char token[1001]; // Buffer para ler cada palavra da entrada
    int total_aulas = 0;
    int presencas = 0;

    // Lê o nome do aluno que queremos verificar
    scanf("%s", nome_alvo);

    // Lê o restante palavra por palavra até acabar a entrada
    while (scanf("%s", token) != EOF) {
        // Se o token contém '/', é uma data -> conta como nova aula
        if (strchr(token, '/') != NULL) {
            total_aulas++;
        }
        // Se não é data, verifica se é o nome do aluno
        else {
            if (strcmp(token, nome_alvo) == 0) {
                presencas++;
            }
        }
    }

    // O enunciado pede o número de AUSÊNCIAS
    printf("%d\n", total_aulas - presencas);

    return 0;
}