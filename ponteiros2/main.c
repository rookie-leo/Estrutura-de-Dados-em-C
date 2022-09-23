/*EXEMPLO DE EXPLICAÇÃO COM PONTEIRO*/
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x=2, y=5;
	int *pont; //declara o ponteiro
	pont=&x; //ponteiro está apontando para o endereço de memória da variável x
	printf("Conteúdo do ponteiro %d e da variável x=%d\n\n",*pont,x);
	pont=&y; //ponteiro está apontando para o endereço de memória da variável y
	//*pont=y; => printf("x=%d e y=%d\n",x,y); 
	//imprimi x=5 e y=5
	printf("x=%d, y=%d, pont=%d\n",x,y,*pont);
	//imprimi x=2 e y=5
	printf("Endereço memo: pont=%d\n\n x=%d\n\n y=%d",pont,&x,&y);
	getch();
	return 0;
}

