/* 65) Receber um nome e imprimir as 4 primeiras letras do nome.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome [30];
	int i;
	printf("Informe um nome ");
	gets(nome);
	for(i=0;i<4;i++){
		printf("%c",nome[i]);
	}
	getch();
	return 0;
}

