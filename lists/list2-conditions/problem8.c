#include <stdio.h>
#include <math.h>

int main() {
    float l1, l2, l3;
    float a, b, c; 

    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &l1);
    printf("Digite o valor do segundo lado: ");
    scanf("%f", &l2);
    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &l3);

    if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)) {
        printf("Os valores podem formar um triangulo.\n");

        if (l1 == l2 && l2 == l3) {
            printf("Tipo (lado): Equilatero\n"); 
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            printf("Tipo (lado): Isosceles\n"); 
        } else {
            printf("Tipo (lado): Escaleno\n"); 
        }

        if (l1 > l2 && l1 > l3) { a = l1; b = l2; c = l3; }
        else if (l2 > l1 && l2 > l3) { a = l2; b = l1; c = l3; }
        else { a = l3; b = l1; c = l2; }

        float a2 = pow(a, 2);
        float bc2 = pow(b, 2) + pow(c, 2);

        if (a2 == bc2) {
            printf("Tipo (angulo): Retangulo\n"); 
        } else if (a2 < bc2) {
            printf("Tipo (angulo): Acutangulo\n"); 
            printf("Tipo (angulo): Obtusangulo\n"); 

    } else {
        printf("Os valores NAO podem formar um triangulo.\n");
    }

    return 0;
}}