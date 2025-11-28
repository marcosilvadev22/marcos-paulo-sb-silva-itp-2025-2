#include <stdio.h>

int main() {
    int chuva[12];
    // Vetor de ponteiros para strings constantes (nomes dos meses)
    char *meses[12] = {
        "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    // Leitura
    for(int i = 0; i < 12; i++) {
        scanf("%d", &chuva[i]);
    }

    // Ordenação (Bubble Sort Decrescente)
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 11; j++) {
            // Se o atual for MENOR que o próximo, troca (para ficar decrescente)
            if(chuva[j] < chuva[j+1]) {
                // Troca a chuva
                int tempChuva = chuva[j];
                chuva[j] = chuva[j+1];
                chuva[j+1] = tempChuva;

                // Troca o nome do mês correspondente
                char *tempMes = meses[j];
                meses[j] = meses[j+1];
                meses[j+1] = tempMes;
            }
        }
    }

    // Saída formatada
    for(int i = 0; i < 12; i++) {
        printf("%s %d\n", meses[i], chuva[i]);
    }

    return 0;
}