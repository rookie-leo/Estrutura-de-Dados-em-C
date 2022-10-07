/*81) Escreva um programa que calcule o quadrado de um número utilizando o conceito de função que não devolve valor.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

float n;
void quadrado ();

int main(){
	setlocale(LC_ALL, "Portuguese");

	printf("Digite um número ");
	scanf("%f",&n);
	quadrado();
	getch();
    
	return 0;
}

void quadrado (){
	printf("O quadrado de %.2f é %.2f.",n,pow(n,2));
}
