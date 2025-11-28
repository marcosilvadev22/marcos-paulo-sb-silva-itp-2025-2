#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../include/tarefas.h"

extern int relatorioTarefas[12][31]; // Declaração do relatório de tarefas como variável externa

// menu do código que exibe as opções para o usuário no terminal..
void exibirMenu() {
    printf("\n== MENU TO DO LIST ==\n");
    // O menu visual é exibido no main, aqui mantemos a função auxiliar se necessária
}

// Aqui essa função é a que adiciona uma tarefa na nossa lista a partir de vetores.
// Ela recebe a lista de tarefas e o endereço do contador para poder atualizá-lo.
void adcTarefa(char **todolist, int *contadorTarefas) {

    // Antes de adicionar, o código checa se a lista não está cheia.
    if (*contadorTarefas >= MAX_TAREFAS) {
        printf("A lista de tarefas esta cheia! Nao e possivel adicionar mais tarefas.\n");
        return;
    }

    // aqui faz a coleta de dados do mês e dia para o relatório de tarefas.
    int mes, dia;
    printf("Digite o mes (1-12) para a tarefa: ");
    scanf("%d", &mes);
    printf("Digite o dia (1-31) para a tarefa: ");
    scanf("%d", &dia);

    // valida a data inserida
    if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        printf("Data invalida! Tarefa nao adicionada.\n");
        while (getchar() != '\n'); //limpa o buffer de entrada
        return;
    }
 
    //passo 1: alocar memoria 
    todolist[*contadorTarefas] = malloc(TAM_DESCRICAO * sizeof(char));
    // passo 2: verifica a alocação 
    if (todolist[*contadorTarefas] == NULL) {
        printf("Erro ao alocar memoria para a nova tarefa.\n");
        return; // se não conseguir alocar, sai da função
    }
    
    // passo 3: lê a descrição da tarefa
    char buffer[TAM_DESCRICAO];
    printf("Digite a descricao da tarefa: ");
    getchar(); // Limpa o '\n' (Enter) deixado pelo scanf do dia
    fgets(buffer, TAM_DESCRICAO, stdin);
    buffer[strcspn(buffer, "\n")] = 0; // Remove o '\n' da string lida

    strcpy(todolist[*contadorTarefas], buffer); // copia para a memória alocada
    relatorioTarefas[mes - 1][dia - 1]++; // atualiza o relatório de tarefas
    (*contadorTarefas)++; // incrementa o contador de tarefas
    printf("Tarefa adicionada com sucesso!\n");
} 

// Para listar as tarefas, eu criei esta função que percorre o vetor com um 'for'.
void listarTarefas(char **tarefas, int numTarefas) {
    printf("\n--- TO DO LIST ---\n");
    if (numTarefas == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
    } else {
        int i;
        for (i = 0; i < numTarefas; i++) { 
            printf("Tarefa %d: %s\n", i + 1, tarefas[i]);
        }
    }
}

// função para deletar uma tarefa da lista
void deletarTarefa(char **todolist, int *contadorTarefas) {
    if (*contadorTarefas == 0) {
        printf("Nenhuma tarefa para deletar.\n");
        return;
    }
    // Primeiro, listamos as tarefas para o usuário escolher qual deletar
    listarTarefas(todolist, *contadorTarefas);
   
    int indice;
    printf("\nDigite o numero da tarefa que deseja deletar(1 a %d): ", *contadorTarefas);
    scanf("%d", &indice);

    // ajusta o indice 
    int idx = indice - 1;

    // valida o indice para o intervalo válido (caso o usuário digite um número fora do esperado)
    if (idx < 0 || idx >= *contadorTarefas) {
        printf("Indice invalido. Nenhuma tarefa deletada.\n");
        return;
    }

    // gerenciamento de memória 
    // Libera a memória da tarefa que está sendo deletada
    free(todolist[idx]);
    printf("Tarefa %d liberada com sucesso da memoria.\n", indice);

    // reorganiza o array de tarefas, movendo as tarefas subsequentes uma posição para trás.
    for (int i = idx; i < *contadorTarefas - 1; i++) {
        todolist[i] = todolist[i + 1];
    }
    
    //define o último ponteiro como NULL para evitar ponteiro pendente
    todolist[*contadorTarefas - 1] = NULL; 
    (*contadorTarefas)--; // Diminui o contador de tarefas
    printf("Tarefa deletada com sucesso!\n");
}

// essa função exibe o relatório de tarefas baseado na matriz relatorioTarefas
void exibirRelatorio(void) { 
    printf("\n --- RELATORIO DE TAREFAS ---\n");

    // alinhando loops para ler a matriz e exibir os dados
    //primeiro fiz um loop externo, que percorre os meses.
    for (int mes = 0; mes < 12; mes++) {
        printf("Mes %02d: ", mes + 1);
        // depois fiz um loop interno para percorrer os dias do mês
        for (int dia = 0; dia < 31; dia++) {
            if (relatorioTarefas[mes][dia] > 0) 
                printf("[%d:%d] ", dia+1, relatorioTarefas[mes][dia]);
        }
        printf("\n");
    }
}

// função para buscar tarefas por palavra-chave
void buscarTarefa(char **tarefas, int numTarefas) {
    if (numTarefas == 0) {
        printf("Nenhuma tarefa cadastrada para buscar.\n");
        return;
    }

    char termo[TAM_DESCRICAO];
    printf("Digite a palavra-chave para buscar: ");
    
    // Limpeza de buffer preventiva 
    fgets(termo, TAM_DESCRICAO, stdin);
    termo[strcspn(termo, "\n")] = 0; // Remove o enter

    printf("\n--- RESULTADO DA BUSCA: '%s' ---\n", termo);
    
    int encontrou = 0;
    // strstr retorna um ponteiro se achar, ou NULL se não achar
    for (int i = 0; i < numTarefas; i++) {
        if (strstr(tarefas[i], termo) != NULL) {
            printf("Tarefa %d: %s\n", i + 1, tarefas[i]);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhuma tarefa encontrada com essa palavra.\n");
    }
}