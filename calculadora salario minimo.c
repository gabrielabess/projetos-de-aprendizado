#include <stdio.h>

int main() {
    float salario_minimo = 1518;
    double salario_pessoal, divisao;
    printf("Insira o seu salario:\n");
    scanf ("%f", salario_pessoal);
    divisao = salario_pessoal/salario_minimo;
    printf("Voce ganha %f salarios minimos", divisao);
}
