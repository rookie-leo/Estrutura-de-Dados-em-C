/*4)Faça um programa que converta uma temperatura em graus Celsius para 
Fahrenheit e Kelvin.
F=(9*C+160)/5  e K = C +273 

C = Celsius
F = Fahrenheit
K = Kelvin*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	setlocale('LC_ALL', "Portuguese");
	
	float c, f, k;
	
	printf("Digite a temperatura em graus Celsius ");
	scanf("%f", & c);
	
	f = ((9 * c) + 160) / 5;
	k = c + 273;
	
	printf("%.1fºC em Fahrenheit é %.1f", c,f);
	printf("\n");
	printf("%.1fºC em Fahrenheit é %.1f", c,k);
}
