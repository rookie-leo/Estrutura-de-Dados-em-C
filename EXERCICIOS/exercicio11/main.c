/*15) Fazer um programa que identifique a idade para emiss�o da carteira
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
		printf("Voc� j� tem idade para tirar a CNH");
	} else {		
		printf("Voc� ainda n�o tem idade para tirar a CNH");
		printf("\nTempo restante %i", 18-idade);
	}
	
	return 0;
}
