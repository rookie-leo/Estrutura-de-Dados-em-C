/*27-	Fa�a um programa que calcule os 10 primeiros n�meros m�ltiplos de 2 maiores ou iguais a zero.  */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num;
	
	while (num < 10) {
		printf("O numero %i � multiplo de 2\n", num*2);	
		num++;
	}
	
	return 0;
}
