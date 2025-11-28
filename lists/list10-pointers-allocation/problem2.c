#include <stdio.h>
#include <stdlib.h>

// Função solicitada
// Obs: O enunciado menciona "int *maior", mas descreve "int *qtd". Usarei qtd.
int* buscaNoVetor(int *v, int n, int valor, int *qtd) {
    int cont = 0;
    // 1. Contar ocorrências para saber tamanho do malloc
    for(int i = 0; i < n; i++) {
        if(v[i] == valor) cont++;
    }

    // Retorna tamanho via ponteiro
    *qtd = cont;

    if(cont == 0) return NULL;

    // 2. Alocar vetor de índices
    int *indices = (int*) malloc(cont * sizeof(int));
    
    // 3. Preencher vetor
    int k = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] == valor) {
            indices[k] = i;
            k++;
        }
    }
    
    return indices; // Retorna endereço base do novo vetor
}

int main() {
    int n, valor;
    scanf("%d", &n);

    int *vetor = (int*) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) scanf("%d", &vetor[i]);

    scanf("%d", &valor);

    int quantidade;
    int *resultado = buscaNoVetor(vetor, n, valor, &quantidade);

    if(resultado == NULL) {
        printf("Nenhuma ocorrencia\n");
    } else {
        printf("%d\n", quantidade); // O enunciado pede para imprimir a quantidade
        for(int i = 0; i < quantidade; i++) {
            printf("%d ", resultado[i]);
        }
        printf("\n");
        free(resultado); // Liberar memória retornada pela função
    }

    free(vetor);
    return 0;
}