/*16) Fazer um programa que verifique qual � o maior ou igual de tr�s n�meros digitados.  */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	printf("Digite o primeiro n�mero ");
	scanf("%i", &n1);
	
	printf("Digite o segundo n�mero ");
	scanf("%i", &n2);
	
	printf("Digite o terceiro n�mero ");
	scanf("%i", &n3);
	
	if (n1 > n2 && n1 > n3) {
		printf("O primeiro n�mero � o maior");
		
	} else if (n2 > n1 && n2 > n3) {
		printf("O segundo n�mero � o maior");
		
	} else if (n3 > n1 && n3 > n2) {
		printf("O terceiro n�mero � o maior");
	}
	
	return 0;
}
