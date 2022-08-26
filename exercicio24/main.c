/*28-	Escreva um programa que mostra todos os números pares de 2 até 50. (Utilize: while)  */

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=2;
	
	while (n<51){
		if (n % 2 == 0){
			printf("O numero %d e par.\n",n);
		}
		
		n++;
	}
	getch();
	return 0;
}

