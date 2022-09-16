/*58) Faça um programa que leia seu nome, transfira-o para outra variável e o imprima.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char p1[30], p2[30];
	printf ("Digite seu nome ");
	gets(p1);
	strcpy(p2,p1);
	printf("Seu nome é %s",p2);
	//puts(p2);
	getch();
	return 0;
}

