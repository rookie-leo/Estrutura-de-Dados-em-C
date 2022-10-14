/*36) Faça um programa que lê uma matriz de 3 x 3 elementos usando um comando for,
multiplica cada elemento por  5 e imprime o resultado.  */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, m[3][3];
	
	for (i = 0; i<3; i++) {
		for (j = 0; j<3; j++){
			printf("Digite um número ");
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\n\nMatriz\n\n");
	
	for (i = 0; i<3; i++) {
		for (j = 0; j<3; j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n\nElementos da matriz multiplicados por 5\n\n");
	
	for (i = 0; i<3; i++) {
		for (j = 0; j<3; j++){
			printf("%d\t",m[i][j]*5);
		}
		printf("\n\n");
	}
	return 0;
}
