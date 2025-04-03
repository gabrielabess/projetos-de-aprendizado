#include <stdio.h>

int main() {
    int opcao;
    printf("Cadastro de Clientes\n 0 - Fim\n 1 - Inclui\n 2 - Altera\n 3 - Exclui\n 4 - Consulta\n Opcao desejada: ");
    scanf("%int", &opcao);

    switch (opcao){
        case 0:
            printf("Fim");
        break;
        case 1: 
            printf("Inclui");
        break;
        case 2: 
            printf("Altera");
        break;
        case 3: 
            printf("Exclui");
        break;
        case 4: 
            printf("Consulta");
        break;
    }
}
