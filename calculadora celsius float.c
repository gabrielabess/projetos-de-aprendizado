#include <stdio.h>

int main() {
    float temperatura_celsius, temperatura_fahrenheit;
    printf("Insira a temperatura em Fahrenheit\n");
    scanf("%f", &temperatura_fahrenheit);
    temperatura_celsius=(temperatura_fahrenheit-32.0) * (5.0/9.0);
    printf("A temperatura em Celsius e: %f", temperatura_celsius);
}
