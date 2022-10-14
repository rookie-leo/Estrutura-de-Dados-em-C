/*16) Fazer um programa que verifique qual é o maior ou igual de três números digitados.  */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	printf("Digite o primeiro número ");
	scanf("%i", &n1);
	
	printf("Digite o segundo número ");
	scanf("%i", &n2);
	
	printf("Digite o terceiro número ");
	scanf("%i", &n3);
	
	if (n1 > n2 && n1 > n3) {
		printf("O primeiro número é o maior");
		
	} else if (n2 > n1 && n2 > n3) {
		printf("O segundo número é o maior");
		
	} else if (n3 > n1 && n3 > n2) {
		printf("O terceiro número é o maior");
	}
	
	return 0;
}
