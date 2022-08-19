/* 18-Faça um programa que receba dois números inteiros quaisquer e verifique se o 
primeiro é múltiplo do segundo. */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Digite o primeiro número ");
	scanf("%i", &n1);
	
	printf("Digite o segundo número ");
	scanf("%i", &n2);
	
	if (n1 % n2 == 0) {
		printf("O número %i é multiplo de %d", n1, n2);
	} else {		
		printf("O número %i não é multiplo de %d", n1, n2);
	}
	
	return 0;
}
