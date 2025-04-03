#include <stdio.h>

int main() {
    float preco, taxa=1.35, valor_taxado;
    printf("Insira o preço do produto:\n");
    scanf("%f", &preco);
    valor_taxado=preco*taxa;
    printf("O valor final e %f, com uma taxa de %f%% aplicada", valor_taxado, (taxa-1)*100);
}
