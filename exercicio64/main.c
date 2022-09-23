/*70- Faça um programa que contém um ponteiro para um número do tipo inteiro, o aloque
  dinamicamente e imprima o valor atribuído a ele.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, *pont;
	pont=(int*)malloc(sizeof(int));
	pont=&n;
	printf("Digite um número ");
	scanf("%d",&n);
	printf("O conteúdo do ponteiro é %d",*pont);
	free (pont);
	getch();
	return 0;
}

