/*68- Fa�a um programa que verifique o endere�o da mem�ria em n�mero decimal e 
hexadecimal de uma vari�vel qualquer do tipo float. */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a;
	printf("Digite um n�mero ");
	scanf("%f",&a);
	printf("O conte�do da vari�vel a = %.2f\n\n",a);
	printf("O endere�o de mem�ria em n�mero decimal da vari�vel a � %d\n\n",&a);
// %d porque o endere�o de mem�ria � um n�mero inteiro
	printf("O endere�o de mem�ria em n�mero hexadecimal da vari�vel a � %x\n\n",&a);
	printf("O endere�o de mem�ria em n�mero hexadecimal da vari�vel a � %p\n\n",&a);
	getch();
	return 0;
}

