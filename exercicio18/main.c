/*22-O perfil de uma pessoa é dado pelo seu ano de nascimento.
Exemplo: Se o ano é 1987, calculamos a soma 19+87, dividimos seu resultado por 5 e pegamos o resto. Este resto indica o perfil da pessoa: 
0 - tímido, 1 - sonhador, 2 - paquerador, 3 - atraente, 4 - irresistível.
 Dado o ano de nascimento de uma pessoa, informe qual é o seu perfil. */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, resto;
	printf("Digite os dois primeiros dígitos do ano do seu nascimento ");
	scanf("%d",&n1);
	printf("Digite os dois primeiros últimos do ano do seu nascimento ");
	scanf("%d",&n2);
	resto=(n1+n2)%5;
	switch (resto){
		case 0: printf("Você é tímido");
		break;
		case 1: printf("Você é sonhador");
		break;
		case 2: printf("Você é paquerador");
		break;
		case 3: printf("Você é atraente");
		break;
		case 4: printf("Você é irresistível");
		break;		
	}
	getch();
	return 0;
}

