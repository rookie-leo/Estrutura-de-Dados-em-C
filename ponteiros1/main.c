/*AULA 10: PONTEIROS
EXEMPLO PARA A EXPLICA��O DE PONTEIROS*/
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int x=2;
	int *pont; //declara o ponteiro
	pont=&x; //ponteiro est� apontando para o endere�o de mem�ria da vari�vel x
	*pont=12;
	printf("Conte�do da vari�vel x = %d\n",x);
	//printf("Conte�do da vari�vel x = %d\n",x);
	printf("Endere�o de mem�ria %d\n",pont);
	printf("Conte�do do ponteiro %d\n",*pont); //mostrando o conte�do
	getch();
	return 0;
}

