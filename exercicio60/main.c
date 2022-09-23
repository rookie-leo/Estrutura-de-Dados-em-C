/*66- Faça um programa que verifique o endereço da memória em número decimal da variável
 de tipo inteira a=10.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a=10;
	printf("O conteúdo da variável a = %d\n\n",a);
	printf("O endereço de memória da variável a é %d",&a);
	getch();
	return 0;
}

