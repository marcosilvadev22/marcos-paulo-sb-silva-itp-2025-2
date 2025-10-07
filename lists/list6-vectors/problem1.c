#include <stdio.h>

int main() {
    int n_questoes;
    printf("Digite o numero de questoes: ");
    scanf("%d", &n_questoes);

    int gabarito[n_questoes];
    int respostas_aluno[n_questoes];

    printf("Digite as respostas do gabarito: ");

    for (int i = 0; i < n_questoes; i++) {

        scanf("%1d", &gabarito[i]);
    }

    printf("Digite as respostas do aluno: ");
    for (int i = 0; i < n_questoes; i++) {
        scanf("%1d", &respostas_aluno[i]);
    }

    int acertos = 0;
    for (int i = 0; i < n_questoes; i++) {
        if (gabarito[i] == respostas_aluno[i]) {
            acertos++;
        }
    }
    
    if (acertos == 1) {
        printf("%d acerto\n", acertos);
    } else {
        printf("%d acertos\n", acertos);
    }

    return 0;
}