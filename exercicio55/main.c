/* Fa�a um programa que leia em duas vari�veis seu nome e sobrenome e imprima-os juntos.
(com espa�o) */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char n1[30],n2[30];
	printf("Digite seu primeiro nome ");
	gets(n1);
	printf("Digite seu �ltimo nome ");
	gets(n2);
	strcat(n1," ");
	strcat(n1,n2);
	printf("Seu nome � %s",n1);
	getch();
	return 0;
}

