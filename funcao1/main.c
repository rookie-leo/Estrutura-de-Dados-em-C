AULA 11 - FUNÇÃO
/*77) Escreva um programa que pergunte um nome e apresente na tela que deve possuir uma função sem 
retorno: "Olá, nome" e o elogio "Bonito nome!". */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

char nome[25]; //variável global

void elogio (){ // função sem retorno
	printf("Olá, %s\nBonito nome!",nome);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Qual é o seu primeiro nome ");
	gets(nome);
	elogio(); // para chamar a função
	//podemos continuar o código
	getch();
	return 0;
}
+
