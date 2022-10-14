/*6)Faça um programa que calcule o volume de uma esfera e escreva seu volume. 
V=4/3*PI*r^3 

PI => colocar como canstante

V= volume = 523,33
r=raio = 5*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float v, r;
	
	printf("Informe o valor do raio ");
	scanf("%f", & r);
	
	v = (4 * PI * pow(r, 3)) / 3;
	
	printf("O volume da esfera é %.2f", v);
}
