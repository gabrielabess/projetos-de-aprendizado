#include <stdio.h>

int main() {
    int notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, notas_1;
    int valor;
    scanf( " %d", &valor);
    
    notas_100=valor/100;
    valor%=100;

    notas_50=valor/50;
    valor%=50;

    notas_20=valor/20;
    valor%=20;

    notas_10=valor/10;
    valor%=10;

    notas_5=valor/5;
    valor%=5;

    notas_2=valor/2;
    valor%=2;

    notas_1=valor/1;
    valor%=1;

    if (notas_100>0) printf("%d notas de 100\n", notas_100);
    if (notas_50>0) printf("%d notas de 50\n", notas_50);
    if (notas_20>0) printf("%d notas de 20\n", notas_20);
    if (notas_10>0) printf("%d notas de 10\n", notas_10);
    if (notas_5>0) printf("%d notas de 5\n", notas_5);
    if (notas_2>0) printf("%d notas de 2\n", notas_2);
    if (notas_1>0) printf("%d notas de 1\n", notas_1);
}
