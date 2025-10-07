#ifndef TAREFAS_H
#define TAREFAS_H

// aqui defini constantes para o tamanho máximo do vetor e da descrição da tarefa
#define MAX_TAREFAS 100
#define TAM_DESCRICAO 100

// Declaração das funções que serão usadas no programa
void exibirMenu();
void adicionarTarefa(char tarefas[MAX_TAREFAS][TAM_DESCRICAO], int *numTarefas);
void listarTarefas(char tarefas[MAX_TAREFAS][TAM_DESCRICAO], int numTarefas);

#endif