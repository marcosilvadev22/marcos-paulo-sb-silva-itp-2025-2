#include <stdio.h>
#include <math.h> 

int main() {
    int num_A, num_B;
    int soma_div_A = 0; 
    int soma_div_B = 0; 

    printf("Digite o primeiro numero (A): ");
    scanf("%d", &num_A);
    printf("Digite o segundo numero (B): ");
    scanf("%d", &num_B);

    for (int i = 1; i < num_A; i++) {
        if (num_A % i == 0) {
            soma_div_A += i;
        }
    }

    for (int i = 1; i < num_B; i++) {
        if (num_B % i == 0) {
            soma_div_B += i;
        }
    }
 
    if (abs(soma_div_A - num_B) <= 2 && abs(soma_div_B - num_A) <= 2) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}