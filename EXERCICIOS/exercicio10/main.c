/*14)Fa�a um programa que calcule a m�dia de quatro n�meros do tipo real e imprima 
para o aluno se ele est� aprovado ou reprovado.
	Obs: O aluno ser� aprovado se a m�dia for maior ou igual a 7.  */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4, media;
	
	printf("Digite a primeira nota ");
	scanf("%f",&n1);
	
	printf("Digite a segunda nota ");
	scanf("%f",&n2);
	
	printf("Digite a terceira nota ");
	scanf("%f",&n3);
	
	printf("Digite a quarta nota ");
	scanf("%f",&n4);
	
	media=(n1+n2+n3+n4)/4;
	
	printf("Sua m�dia � %.2f\n",media);
	if (media>=7){
		printf("Voc� est� aprovado!");
	} else {
		printf("Voc� est� reprovado!");
	}

}
