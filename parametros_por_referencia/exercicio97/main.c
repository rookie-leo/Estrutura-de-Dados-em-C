/*97) Crie um procedimento que receba um número real passado por referência, calcule
 o seu quadrado subtraído por ele mesmo e imprima na tela seu resultado.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

void quadrado (float *n){
	printf("O quadrado do número %.2f subtraído por %.2f é %.2f.",*n, *n, pow(*n,2)-*n);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float x;
	printf("Digite um número ");
	scanf("%f",&x);
	quadrado(&x);
	getch();
	return 0;
}

