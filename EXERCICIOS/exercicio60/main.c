/*66- Fa�a um programa que verifique o endere�o da mem�ria em n�mero decimal da vari�vel
 de tipo inteira a=10.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a=10;
	printf("O conte�do da vari�vel a = %d\n\n",a);
	printf("O endere�o de mem�ria da vari�vel a � %d",&a);
	getch();
	return 0;
}

