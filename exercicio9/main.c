/*13) Faça um programa que calcule a média de quatro números do tipo real e imprima 
para o aluno se ele está aprovado.
 	Obs: O aluno será aprovado se a média for maior ou igual a 7.  */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	printf("Sua média é %.2f\n",media);
	if (media>=7){
		printf("Você está aprovado!");
	}

}
