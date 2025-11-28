#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* misturar(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // Aloca tamanho total + 1 para o caractere nulo
    char *resultado = (char*) malloc((len1 + len2 + 1) * sizeof(char));
    
    int i = 0, j = 0, k = 0;
    
    // Enquanto houver letras nas duas
    while(i < len1 && j < len2) {
        resultado[k++] = str1[i++];
        resultado[k++] = str2[j++];
    }
    
    // Copia o resto da str1 (se houver)
    while(i < len1) {
        resultado[k++] = str1[i++];
    }
    
    // Copia o resto da str2 (se houver)
    while(j < len2) {
        resultado[k++] = str2[j++];
    }
    
    resultado[k] = '\0'; // Finaliza string
    return resultado;
}

int main() {
    char s1[101], s2[101];
    
    // Ler string com espaços (seguro)
    scanf(" %[^\n]", s1);
    scanf(" %[^\n]", s2);

    char *res = misturar(s1, s2);
    
    printf("%s\n", res);
    
    free(res);
    return 0;
}