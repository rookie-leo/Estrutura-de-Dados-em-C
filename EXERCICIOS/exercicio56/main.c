/*61) Fa�a um programa que leia a vari�vel "UNINOVE", mostre a quantidade de caracteres
 e o tamanho do vetor. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char n[]={"Uninove"};
	printf("O conte�do da vari�vel � %s\n",n);
	printf("O tamanho da vari�vel � %d\n",strlen(n));
	printf("O tamanho do vetor que abriga a vari�vel � %d",strlen(n)+1);
	getch();
	return 0;
}

