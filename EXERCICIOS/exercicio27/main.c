/*31-Fa�a um programa que calcule os 20 primeiros n�meros m�ltiplos de 3 maiores que zero.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int n=1;
	do{
		printf("O n�mero %d � m�ltiplo de 3.\n",n*3);
		n++;
	}
	while (n<21);
	getch();
	return 0;
}

