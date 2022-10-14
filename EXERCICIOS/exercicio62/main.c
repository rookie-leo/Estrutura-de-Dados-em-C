/*68- Faça um programa que verifique o endereço da memória em número decimal e 
hexadecimal de uma variável qualquer do tipo float. */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a;
	printf("Digite um número ");
	scanf("%f",&a);
	printf("O conteúdo da variável a = %.2f\n\n",a);
	printf("O endereço de memória em número decimal da variável a é %d\n\n",&a);
// %d porque o endereço de memória é um número inteiro
	printf("O endereço de memória em número hexadecimal da variável a é %x\n\n",&a);
	printf("O endereço de memória em número hexadecimal da variável a é %p\n\n",&a);
	getch();
	return 0;
}

