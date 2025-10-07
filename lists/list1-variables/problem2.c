#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    kelvin = celsius + 273.15;
    
    printf("A temperatura em Fahrenheit e: %.1f F\n", fahrenheit);
    printf("A temperatura em Kelvin e: %.1f K\n", kelvin);

    return 0;
}