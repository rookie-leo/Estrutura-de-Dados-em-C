/*EXEMPLO DE EXPLICA��O COM PONTEIRO*/
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x=2, y=5;
	int *pont; //declara o ponteiro
	pont=&x; //ponteiro est� apontando para o endere�o de mem�ria da vari�vel x
	printf("Conte�do do ponteiro %d e da vari�vel x=%d\n\n",*pont,x);
	pont=&y; //ponteiro est� apontando para o endere�o de mem�ria da vari�vel y
	//*pont=y; => printf("x=%d e y=%d\n",x,y); 
	//imprimi x=5 e y=5
	printf("x=%d, y=%d, pont=%d\n",x,y,*pont);
	//imprimi x=2 e y=5
	printf("Endere�o memo: pont=%d\n\n x=%d\n\n y=%d",pont,&x,&y);
	getch();
	return 0;
}

