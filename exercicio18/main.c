/*22-O perfil de uma pessoa � dado pelo seu ano de nascimento.
Exemplo: Se o ano � 1987, calculamos a soma 19+87, dividimos seu resultado por 5 e pegamos o resto. Este resto indica o perfil da pessoa: 
0 - t�mido, 1 - sonhador, 2 - paquerador, 3 - atraente, 4 - irresist�vel.
 Dado o ano de nascimento de uma pessoa, informe qual � o seu perfil. */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, resto;
	printf("Digite os dois primeiros d�gitos do ano do seu nascimento ");
	scanf("%d",&n1);
	printf("Digite os dois primeiros �ltimos do ano do seu nascimento ");
	scanf("%d",&n2);
	resto=(n1+n2)%5;
	switch (resto){
		case 0: printf("Voc� � t�mido");
		break;
		case 1: printf("Voc� � sonhador");
		break;
		case 2: printf("Voc� � paquerador");
		break;
		case 3: printf("Voc� � atraente");
		break;
		case 4: printf("Voc� � irresist�vel");
		break;		
	}
	getch();
	return 0;
}

