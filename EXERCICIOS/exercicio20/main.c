/*24-Fa�a um programa que leia tr�s n�meros inteiros, sendo que o primeiro corresponde a um c�digo e os outros dois correspondem a operando para o c�lculo do produto not�vel entre os mesmos com base na tabela abaixo:
C�DIGO	     PRODUTO NOT�VEL                       			F�RMULA
1			Quadrado da diferen�a				(a - b)*(a - b)
2			Quadrado da soma				(a + b)*(a + b)
3			Soma do quadrado				(a*a)+(b*b)
4			Diferen�a do quadrado				(a*a)-(b*b)
5			Produto da soma pela diferen�a 		(a + b)*(a - b)  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, x, cod;
	printf("Digite uma das op��es abaixo que se referem ao produto not�vel que voc� queira calcular\n");
	printf("1-Quadrado da diferen�a\n2-Quadrado da soma\n3-Soma do quadrado\n4-Diferen�a do quadrado\n5-Produto da soma pela diferen�a\nOp��o: ");
	scanf("%d",&cod);
	printf("Digite o primeiro valor inteiro que ser� usado para o c�lculo ");
	scanf("%d",&a);
	printf("Digite o segundo valor inteiro que ser� usado para o c�lculo ");
	scanf("%d",&b);
	switch (cod){
		case 1: x=pow(a-b,2);
		printf("O quadrado da diferen�a entre o n�mero %d e o n�mero %d � %d",a,b,x);
		break;
		case 2: x=pow(a+b,2);
		printf("O quadrado da soma entre o n�mero %d e o n�mero %d � %d",a,b,x);
		break;
		case 3: x=(a*a)+(b*b);
		printf("A soma do quadrado entre o n�mero %d e o n�mero %d � %d",a,b,x);
		break;
		case 4: x=(a*a)-(b*b);
		printf("A diferen�a do quadrado entre o n�mero %d e o n�mero %d � %d",a,b,x);
		break;
		case 5: x=(a+b)*(a-b);
		printf("O produto da soma pela diferen�a entre o n�mero %d e o n�mero %d � %d",a,b,x);
		break;
		default: printf("Voc� digitou a op��o errada");
	}
	getch();
	return 0;
}

