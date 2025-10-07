#include <stdio.h>
#include "../include/tarefas.h"

int main() {
    char tarefas[MAX_TAREFAS][TAM_DESCRICAO]; // Criei um vetor de strings para guardar cada tarefa
    int numTarefas = 0; // Um contador para eu saber quantas tarefas já foram adicionadas.
    int opcao;

    /* Optei por um 'do-while' para o menu, porque ele garante que o menu apareça
     pelo menos uma vez antes de checar se o usuário decidiu sair. */

    do {
        exibirMenu();
        scanf("%d", &opcao);
        
        while(getchar() != '\n');

        // Aqui, usei o 'if/else if' para verificar a opção do usuário e chamar a função certa.
        if (opcao == 1) {
            adicionarTarefa(tarefas, &numTarefas);
        } else if (opcao == 2) {
            listarTarefas(tarefas, numTarefas);
        } else if (opcao == 3) {
            printf("Saindo do programa...\n");
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);
    return 0; 
}