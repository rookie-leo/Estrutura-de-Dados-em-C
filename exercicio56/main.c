/*61) Faça um programa que leia a variável "UNINOVE", mostre a quantidade de caracteres
 e o tamanho do vetor. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char n[]={"Uninove"};
	printf("O conteúdo da variável é %s\n",n);
	printf("O tamanho da variável é %d\n",strlen(n));
	printf("O tamanho do vetor que abriga a variável é %d",strlen(n)+1);
	getch();
	return 0;
}

