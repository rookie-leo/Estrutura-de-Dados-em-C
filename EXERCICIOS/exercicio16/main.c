/*20-Fa�a um programa que controle o caixa de um hotel para 
recebimento de pagamento das di�rias de seus h�spedes. 
Para o c�lculo do valor a pagar, sabe-se que a di�ria � de R$ 95,00 
e a taxa de servi�os � estipulada de acordo com o n�mero de di�rias, conforme o descrito abaixo:
"	15% por dia, se o n�mero de di�rias for menor do que 10.
"	10% por dia, se o n�mero de di�rias for igual a 10.
"	5% por dia, se o n�mero de di�rias for maior que 10.
O programa dever� receber o n�mero de dias de hospedagem de um cliente, 
calcular e apresentar na tela o valor da taxa e o total a ser pago.  */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int d;
	float v, vtotal;
	
	v = 95.00;
	
	printf("Digite a quantidade de dias em que o cliente ficar� hospedado ");
	scanf("%i", &d);
	
	vtotal = d * v;
	if (d < 10) {
		;	
		printf("O valor total a ser pago mais a taxa � de %.2f", vtotal += vtotal*0.15);
	} else
	if (d == 10) {
		vtotal += vtotal*0.10;
		printf("O valor total a ser pago mais a taxa � de %.2f", vtotal);
	} else 
	if (d > 10) {
		vtotal += vtotal*0.05;
		printf("O valor total a ser pago mais a taxa � de %.2f", vtotal);	
	}
	
	
}
