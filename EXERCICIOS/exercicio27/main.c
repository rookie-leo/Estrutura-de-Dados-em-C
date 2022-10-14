/*31-Faça um programa que calcule os 20 primeiros números múltiplos de 3 maiores que zero.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int n=1;
	do{
		printf("O número %d é múltiplo de 3.\n",n*3);
		n++;
	}
	while (n<21);
	getch();
	return 0;
}

