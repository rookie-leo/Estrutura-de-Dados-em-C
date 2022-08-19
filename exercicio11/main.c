/*15) Fazer um programa que identifique a idade para emissão da carteira
 de motorista. OBS: Se for menor de idade escrever quanto tempo falta para tirar a CNH.  */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite a sua idade ");
	scanf("%i", &idade);
	
	
	
	if (idade >= 18) {
		printf("Você já tem idade para tirar a CNH");
	} else {		
		printf("Você ainda não tem idade para tirar a CNH");
		printf("\nTempo restante %i", 18-idade);
	}
	
	return 0;
}
