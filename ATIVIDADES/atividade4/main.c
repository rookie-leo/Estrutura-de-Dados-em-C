/*
Escreva um programa em C que solicite ao usuário 10 palavras de no máximo 15 caracteres cada uma e
apresente-as na tela na seguinte ordem: 1ª, 10ª, 2ª, 9ª, 3ª, 8ª, 4ª, 7ª, 5ª, 6ª.
*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#define QTD 10
#define LETRAS 15

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[QTD][LETRAS];
    int i;
    for (i = 0; i < QTD; i++)
    {
        printf("Digite um nome: ");
        gets(nome[i]);
    }

    puts(nome[0]);
    puts(nome[9]);
    puts(nome[1]);
    puts(nome[8]);
    puts(nome[2]);
    puts(nome[7]);
    puts(nome[3]);
    puts(nome[6]);
    puts(nome[4]);
    puts(nome[5]);

    getch();
    return 0;
}