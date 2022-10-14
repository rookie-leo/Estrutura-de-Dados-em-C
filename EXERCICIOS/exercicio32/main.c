/* 36-	Faça um programa que calcule os 15 primeiros números múltiplos de 5 maiores que zero. */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	for(n=1;n<=15;n++){
		printf("O número %d é múltiplo de 5.\n",n*5);
	}
	getch();
	return 0;
}

