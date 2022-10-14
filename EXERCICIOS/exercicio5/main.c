/* 5)Faça um programa que calcule a área de um trapézio e escreva sua área.
A=((B+b)*h)/2

A = área
B = base maior
b = base menor
h = altura*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, b,h;
	
	printf("Digite o valor da base maior ");
	scanf("%f", & B);
	
	printf("Digite o valor da base menor ");
	scanf("%f", & b);
	
	printf("Digite o valor da altura ");
	scanf("%f", & h);
	
	A=((B+b)*h)/2;
	
	printf("O valor do trapézio é igual a  %.1f", A);
}
