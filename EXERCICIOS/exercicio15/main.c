/*19-Um cliente ao adquirir um determinado produto em uma loja, foi informado de que havia descontos progressivos conforme a quantidade de unidades compradas. O preço unitário é de R$ 75,00. Faça um programa que receba a quantidade de produtos e apresente na tela o valor pago:
-> sem desconto se a compra for menor que 10 unidades;
-> desconto de 10% se a compra for acima de 10 unidades;
-> desconto de 15% se a compra for acima de 40 unidades;
-> desconto de 25% se a compra for acima de 100 unidades. 
Teste: n=8 => R$ 600,00
n=15 => R$ 1012,50
n=60 => R$ 3825,00
n=150 => R$ 8437,50 */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	float a=75, vtotal;
	printf("Digite a quantidade comprada ");
	scanf("%d",&n);
	if (n<10){
		vtotal=n*a;
		printf("Você comprou %d unidades e pagará R$ %.2f",n,vtotal);
	}
	else
	if (n<=40){
		vtotal=n*a*0.90;
		//vtotal=n*a-n*a*0.10
		printf("Você comprou %d unidades, terá um desconto de 10%% e pagará R$ %.2f",n,vtotal);
	}
	else
	if(n<=100){
		vtotal=n*a*0.85;
		//vtotal=n*a-n*a*0.15
		printf("Você comprou %d unidades, terá um desconto de 15%% e pagará R$ %.2f",n,vtotal);
	}
	else{
			vtotal=n*a*0.75;
		//vtotal=n*a-n*a*0.25
		printf("Você comprou %d unidades, terá um desconto de 25%% e pagará R$ %.2f",n,vtotal);
	}
	getch();
	return 0;
}

