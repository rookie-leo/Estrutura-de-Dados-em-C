/* 36-	Fa�a um programa que calcule os 15 primeiros n�meros m�ltiplos de 5 maiores que zero. */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	for(n=1;n<=15;n++){
		printf("O n�mero %d � m�ltiplo de 5.\n",n*5);
	}
	getch();
	return 0;
}

