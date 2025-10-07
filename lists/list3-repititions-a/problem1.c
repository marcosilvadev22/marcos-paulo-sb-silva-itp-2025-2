#include <stdio.h>

int main() {
    float comprimento_folha, largura_folha, comprimento_bolso;
    int dobras = 0; 

    printf("Digite o comprimento da folha: ");
    scanf("%f", &comprimento_folha);
    printf("Digite a largura da folha: ");
    scanf("%f", &largura_folha);
    printf("Digite o comprimento do bolso: ");
    scanf("%f", &comprimento_bolso);

    while (comprimento_folha > comprimento_bolso && largura_folha > comprimento_bolso) {
        dobras++;

        if (comprimento_folha > largura_folha) {
            comprimento_folha = comprimento_folha / 2.0;
        } else {
            largura_folha = largura_folha / 2.0;
        }
        
    }

    printf("Sera necessario fazer %d dobras.\n", dobras);

    return 0;
}