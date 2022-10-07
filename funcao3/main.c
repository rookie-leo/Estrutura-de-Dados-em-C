/* 80) Faça um programa que calcule a soma de dois números utilizando o conceito de função que devolve valor. */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float a, b;

float soma() {
    return a + b;
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um numero: ");
    scanf("%f", &a);

    printf("Digite um numero: ");
    scanf("%f", &b);

    printf("A soma entre %.2f e %.2f é %.2f", a, b, soma());
}