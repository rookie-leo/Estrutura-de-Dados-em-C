/*79) Faça um programa que calcule o produto (multiplicação) dos números 2 e 110 utilizando o 
conceito de função que devolve valor.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int a=2, b=110;

int produto(){
	return a*b;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	//int resultado;
	//resultado=produto();
	printf("O produto entre 2 e 110 é %d.",produto());
	getch();
	return 0;
}
