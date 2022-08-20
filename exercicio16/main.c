/*20-Faça um programa que controle o caixa de um hotel para 
recebimento de pagamento das diárias de seus hóspedes. 
Para o cálculo do valor a pagar, sabe-se que a diária é de R$ 95,00 
e a taxa de serviços é estipulada de acordo com o número de diárias, conforme o descrito abaixo:
"	15% por dia, se o número de diárias for menor do que 10.
"	10% por dia, se o número de diárias for igual a 10.
"	5% por dia, se o número de diárias for maior que 10.
O programa deverá receber o número de dias de hospedagem de um cliente, 
calcular e apresentar na tela o valor da taxa e o total a ser pago.  */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int d;
	float v, vtotal;
	
	v = 95.00;
	
	printf("Digite a quantidade de dias em que o cliente ficará hospedado ");
	scanf("%i", &d);
	
	vtotal = d * v;
	if (d < 10) {
		;	
		printf("O valor total a ser pago mais a taxa é de %.2f", vtotal += vtotal*0.15);
	} else
	if (d == 10) {
		vtotal += vtotal*0.10;
		printf("O valor total a ser pago mais a taxa é de %.2f", vtotal);
	} else 
	if (d > 10) {
		vtotal += vtotal*0.05;
		printf("O valor total a ser pago mais a taxa é de %.2f", vtotal);	
	}
	
	
}
