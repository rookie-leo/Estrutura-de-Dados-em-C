/*57) Fa�a um programa que leia e imprima uma palavra qualquer.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	char palavra[46];
	printf("Digite uma palavra ");
	gets (palavra);
	printf("A palavra �: \n\n");
	puts (palavra);
	getch();
	return 0;
}

