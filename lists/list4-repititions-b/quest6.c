#include <stdio.h>
#include <math.h>

int main() {
    int limite = 1000;
    
    printf("Trios pitagoricos com o maior numero menor que %d:\n", limite);

    for (int c = 1; c < limite; c++) {
        for (int b = 1; b < c; b++) {
            for (int a = 1; a < b; a++) {
                if (a*a + b*b == c*c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}