#include <stdio.h>

void exibirHorario(int hora, int minuto, int formato) {
    hora += minuto / 60;
    minuto = minuto % 60;
    hora = hora % 24;

    if (formato == 0) { 
        printf("%02d:%02d\n", hora, minuto);
    } else { 
        int hora_exibida = hora;
        char periodo[3]; 

        if (hora == 0) {
            hora_exibida = 12;
            sprintf(periodo, "AM"); 
        } else if (hora >= 1 && hora <= 11) {
            hora_exibida = hora;
            sprintf(periodo, "AM");
        } else if (hora == 12) {
            hora_exibida = 12;
            sprintf(periodo, "PM");
        } else { 
            hora_exibida = hora - 12;
            sprintf(periodo, "PM");
        }
        printf("%02d:%02d %s\n", hora_exibida, minuto, periodo);
    }
}

int main() {
    int h_inicial, m_inicial, formato_escolhido;

    printf("Digite a hora inicial, minuto inicial e o formato (0 ou 1): ");
    scanf("%d %d %d", &h_inicial, &m_inicial, &formato_escolhido);

    printf("\nHorarios das rondas:\n");
    exibirHorario(h_inicial, m_inicial, formato_escolhido);
    exibirHorario(h_inicial + 1, m_inicial, formato_escolhido); 
    exibirHorario(h_inicial + 2, m_inicial + 10, formato_escolhido); 
    exibirHorario(h_inicial + 4, m_inicial + 40, formato_escolhido);
    exibirHorario(h_inicial + 12, m_inicial + 5, formato_escolhido);

    return 0;
}