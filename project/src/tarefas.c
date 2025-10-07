#include <stdio.h>
#include <string.h>
#include "../include/tarefas.h"

// menu do código que exibe as opções para o usuário no terminal..

void exibirMenu() {
    printf("\n== TO DO LIST ==\n");
    printf("1. Adicionar nova tarefa\n");
    printf("2. Listar minhas tarefas adicionadas\n");
    printf("3. Sair\n");
    printf("Escolha uma das opcoes: ");
}

// Aqui essa função é a que adiciona uma tarefa na nossa lista a partir de vetores.
// Ela recebe a lista de tarefas e o endereço do contador para poder atualizá-lo.

void adicionarTarefa(char tarefas[MAX_TAREFAS][TAM_DESCRICAO], int *numTarefas) {

    // Antes de adicionar, o código checa se a lista não está cheia.

    if (*numTarefas < MAX_TAREFAS) {
        printf("Digite a descricao da nova tarefa: ");
        
        // Decidi usar fgets para ler a tarefa, pois é mais seguro que o scanf para textos,
        // evitando problemas de estourar o tamanho do vetor.

        fgets(tarefas[*numTarefas], TAM_DESCRICAO, stdin);
        
        // O fgets captura o "Enter" (\n) no final, então essa linha serve para remover esse caractere.
        tarefas[*numTarefas][strcspn(tarefas[*numTarefas], "\n")] = 0;

        // Se a tarefa foi adicionada, eu incremento o contador de tarefas.
        (*numTarefas)++;
        printf("Tarefa adicionada com sucesso!\n");
    } else {
        printf("A lista de tarefas esta cheia!\n");
    }
}

// Para listar as tarefas, eu criei esta função que percorre o vetor com um 'for'.

void listarTarefas(char tarefas[MAX_TAREFAS][TAM_DESCRICAO], int numTarefas) {
    printf("\n--- LISTA DE TAREFAS ---\n");
    
    // Primeiro, uma verificação rápida: se não tem tarefas, aviso o usuário.

    if (numTarefas == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
    } else {

        // Se existem tarefas, eu faço um loop para mostrar cada uma delas.

        for (int i = 0; i < numTarefas; i++) {
            
            // E aqui, dentro do loop, eu imprimo cada tarefa, acessando pelo índice 'i'.

            printf("Tarefa %d: %s\n", i + 1, tarefas[i]);
        }
    }
}