#ifndef TAREFAS_H
#define TAREFAS_H

#include <stdio.h> 

// Definições globais
#define MAX_TAREFAS 100
#define TAM_DESCRICAO 256

// Protótipos das Funções -- atualizados com a função deletar e buscar uma tarefa e exibir relatório. 
void exibirMenu();
void adcTarefa(char **todolist, int *contadorTarefas);
void listarTarefas(char **tarefas, int numTarefas);
void deletarTarefa(char **todolist, int *contadorTarefas); // nova função adicionada
void exibirRelatorio(void); // nova função adiconada 
void buscarTarefa(char **tarefas, int numTarefas); // nova função adicionada

#endif