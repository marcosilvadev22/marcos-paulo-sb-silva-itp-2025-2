#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../include/tarefas.h"

// Variáveis globais

// O "contêiner" agora é somente um ponteiro.
char **tarefas; 
int contador_tarefas = 0;
/* adicionei uma matriz aqui 
ela representa  o relatorio de tarefas [12] meses (linhas) e [31] dias (colunas) */
int relatorioTarefas[12][31];

int main () {
    //aqui declaramos a lista de tarefas como um ponteiro para ponteiro de char
    int opcao; 

    // Alocamos o "fichário" (a lista de ponteiros)
    // Estamos alocando espaço para MAX_TAREFAS ponteiros de char (char *)
    tarefas = malloc(MAX_TAREFAS * sizeof(char *));

    //aqui se o malloc falhar, ele retorna NULL
    if (tarefas == NULL) {
        printf("Erro ao alocar memória para a lista de tarefas.\n");
        return 1; //encerra o programa com erro.
    }

    // inicialização do relatório de tarefas a partir de matriz...
    printf("Iniciando o relatório...\n");
    for (int mes = 0; mes < 12; mes++) {
        for (int dia = 0; dia < 31; dia++) {
            relatorioTarefas[mes][dia] = 0; // inicializa todas as entradas com zero
        }
    }
    
    do {
        exibirMenu();
        printf("\n--- MENU TO DO LIST ---\n");
        printf("1. Adicionar Tarefa\n");
        printf("2. Listar Tarefas\n");
        printf("3. Deletar Tarefa\n"); // adicionei a função de deletar tarefa no menu
        printf("4. Exibir Relatorio de Tarefas\n"); // adicionei a opção de exibir relatório
        printf("5. Buscar Tarefa\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        
        scanf("%d", &opcao);
        getchar(); // Limpa buffer para evitar erros de leitura

        if (opcao == 1) {
            adcTarefa(tarefas, &contador_tarefas);
        } else if (opcao == 2) {
            listarTarefas(tarefas, contador_tarefas);
        } else if (opcao == 3) {
            deletarTarefa(tarefas, &contador_tarefas); // adicionei a chamada a função de deletar tarefa
        } else if (opcao == 4) {
            exibirRelatorio(); // adicionei a chamada a função de exibir relatório
        } else if (opcao == 5) {
            buscarTarefa(tarefas, contador_tarefas); // adicionei a chamada a função de buscar tarefa.
        }
    } while (opcao != 0);

    printf("Liberando memoria...\n");
    // para cada tarefa alocada, liberamos a memória
    for (int i = 0; i < contador_tarefas; i++) {
        free(tarefas[i]);
    }

    free(tarefas); // liberamos a lista de ponteiros
    
    printf("Memoria liberada. Encerrando o programa.\n");
    return 0;
}