/* 18-Fa�a um programa que receba dois n�meros inteiros quaisquer e verifique se o 
primeiro � m�ltiplo do segundo. */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Digite o primeiro n�mero ");
	scanf("%i", &n1);
	
	printf("Digite o segundo n�mero ");
	scanf("%i", &n2);
	
	if (n1 % n2 == 0) {
		printf("O n�mero %i � multiplo de %d", n1, n2);
	} else {		
		printf("O n�mero %i n�o � multiplo de %d", n1, n2);
	}
	
	return 0;
}
