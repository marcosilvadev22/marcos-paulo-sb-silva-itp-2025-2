#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para isupper (letra maiúscula) e isdigit (número)

int main() {
    char placa[12];
    scanf("%s", placa);
    int len = strlen(placa);

    // Validação Padrão Brasileiro: LLL-AAAA (Tamanho 8)
    if (len == 8) {
        // Verifica se posições 0,1,2 são letras maiúsculas
        // Verifica se posição 3 é hífen
        // Verifica se posições 4,5,6,7 são dígitos
        if (isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) &&
            placa[3] == '-' &&
            isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])) {
            printf("brasileiro\n");
        } else {
            printf("inválido\n");
        }
    }
    // Validação Padrão Mercosul: LLLALAA (Tamanho 7)
    else if (len == 7) {
        // LLL (0-2), A (3), L (4), AA (5-6)
        if (isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) &&
            isdigit(placa[3]) &&
            isupper(placa[4]) &&
            isdigit(placa[5]) && isdigit(placa[6])) {
            printf("mercosul\n");
        } else {
            printf("invalido\n");
        }
    }
    else {
        printf("invalido\n");
    }

    return 0;
}