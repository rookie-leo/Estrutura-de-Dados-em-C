#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um numero inteiro de 1 a 7 que corresponde a um dia da semana ");
	scanf("%i", &n);
	
	switch(n) {
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda");
			break;
		case 3:
			printf("Terça");
			break;
		case 4:
			printf("Quarta");
			break;
		case 5:
			printf("Quinta");
			break;
		case 6:
			printf("Sexta");
			break;
		case 7:
			printf("Sabado");
			break;
		default:
			printf("Você digitou o valor errado!");
			
	} 
}
