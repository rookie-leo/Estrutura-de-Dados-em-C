/*24-Faça um programa que leia três números inteiros, sendo que o primeiro corresponde a um código e os outros dois correspondem a operando para o cálculo do produto notável entre os mesmos com base na tabela abaixo:
CÓDIGO	     PRODUTO NOTÁVEL                       			FÓRMULA
1			Quadrado da diferença				(a - b)*(a - b)
2			Quadrado da soma				(a + b)*(a + b)
3			Soma do quadrado				(a*a)+(b*b)
4			Diferença do quadrado				(a*a)-(b*b)
5			Produto da soma pela diferença 		(a + b)*(a - b)  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, x, cod;
	printf("Digite uma das opções abaixo que se referem ao produto notável que você queira calcular\n");
	printf("1-Quadrado da diferença\n2-Quadrado da soma\n3-Soma do quadrado\n4-Diferença do quadrado\n5-Produto da soma pela diferença\nOpção: ");
	scanf("%d",&cod);
	printf("Digite o primeiro valor inteiro que será usado para o cálculo ");
	scanf("%d",&a);
	printf("Digite o segundo valor inteiro que será usado para o cálculo ");
	scanf("%d",&b);
	switch (cod){
		case 1: x=pow(a-b,2);
		printf("O quadrado da diferença entre o número %d e o número %d é %d",a,b,x);
		break;
		case 2: x=pow(a+b,2);
		printf("O quadrado da soma entre o número %d e o número %d é %d",a,b,x);
		break;
		case 3: x=(a*a)+(b*b);
		printf("A soma do quadrado entre o número %d e o número %d é %d",a,b,x);
		break;
		case 4: x=(a*a)-(b*b);
		printf("A diferença do quadrado entre o número %d e o número %d é %d",a,b,x);
		break;
		case 5: x=(a+b)*(a-b);
		printf("O produto da soma pela diferença entre o número %d e o número %d é %d",a,b,x);
		break;
		default: printf("Você digitou a opção errada");
	}
	getch();
	return 0;
}

