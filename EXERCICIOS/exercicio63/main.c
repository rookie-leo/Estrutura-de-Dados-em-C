/*69- Fa�a um programa que verifique o endere�o da mem�ria da vari�vel de tipo inteira b=10, atribua a vari�vel a um ponteiro e imprima na tela o endere�o de mem�ria do ponteiro e seu valor.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int b=10,*pont;
	pont=&b;
	printf("O endere�o de mem�ria do ponteiro � %d e o seu conte�do � %d.",pont,*pont);
	getch();
	return 0;
}

