#include <stdio.h>

int main() {
    float metros, decimetros, centimetros;
    printf ("Insira o valor em metros:\n");
    scanf ("%f", &metros);
    decimetros = metros*10;
    centimetros = decimetros*10;
    printf ("%f em decimetros e %f e em centimetros %f", metros, decimetros, centimetros);
}
