/*70- Fa�a um programa que cont�m um ponteiro para um n�mero do tipo inteiro, o aloque
  dinamicamente e imprima o valor atribu�do a ele.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, *pont;
	pont=(int*)malloc(sizeof(int));
	pont=&n;
	printf("Digite um n�mero ");
	scanf("%d",&n);
	printf("O conte�do do ponteiro � %d",*pont);
	free (pont);
	getch();
	return 0;
}

