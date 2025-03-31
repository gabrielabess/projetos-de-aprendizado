#include <stdio.h>

int main(){
	float peso, altura, soma;
	printf("Insira seu peso:\n");
	scanf(" %f", &peso);
	printf("Insira sua altura:\n");
	scanf(" %f", &altura);
	soma= peso/(altura*altura);
	printf("O seu imc e: %f", soma);	
	if (soma<18)
		printf("\nInfelizmente você esta abaixo do peso...");
	else
	if (18<=soma && soma<24)
		printf ("\nPeso normal!");
	else
	if (24<=soma && soma<30)
		printf ("\n Excesso de peso!");
	else
	if (30<=soma && soma<35)
		printf("\n Obesidade classe I");
	else
	if (35<=soma && soma<40)
		printf("\n Obesidade classe II");
	else
	if (soma>=40)
		printf("\n Obesidade classe III");
}
