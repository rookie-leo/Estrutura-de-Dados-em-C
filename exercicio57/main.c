/*62) Fa�a um programa que contenha um vetor de strings que armazene o nome dos seus
cinco melhores amigos e imprima os nomes armazenados no vetor na ordem inversa de 
digita��o.*/
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[5][30];
	int i;
	printf("Voc� dever� digitar o nome de 5 amigos\n");
	for(i=0;i<5;i++){
		printf("Digite o nome ");
		gets(nome[i]);		
	}
	printf("\n\nNomes na ordem inversa de digita��o\n\n");
	for(i=4;i>=0;i--){
		//printf("%s\t",nome[i]);
		//printf("%s\n",nome[i]);
		puts(nome[i]);
	}
	getch();
	return 0;
}

