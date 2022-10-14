/*AULA 10: PONTEIROS
EXEMPLO PARA A EXPLICAÇÃO DE PONTEIROS*/
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int x=2;
	int *pont; //declara o ponteiro
	pont=&x; //ponteiro está apontando para o endereço de memória da variável x
	*pont=12;
	printf("Conteúdo da variável x = %d\n",x);
	//printf("Conteúdo da variável x = %d\n",x);
	printf("Endereço de memória %d\n",pont);
	printf("Conteúdo do ponteiro %d\n",*pont); //mostrando o conteúdo
	getch();
	return 0;
}

