/*64)Escrever um programa que receba um nome.
a)Que conte o número de vogais existentes nele. 
b)O programa deverá imprimir o número total de caracteres do nome. 
c)Quantas vogais e a respectiva porcentagem das vogais em relação ao total de caracteres.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[30];
	int i, soma=0, tamanho;
	float porcentagem;
	printf("Digite um nome ");
	gets(nome);
	tamanho=strlen(nome);
	for(i=0;i<tamanho;i++){
		if(tolower(nome[i])=='a'||tolower(nome[i])=='e'||tolower(nome[i])=='i'||tolower(nome[i])=='o'||tolower(nome[i])=='u'){
			soma++;
		}
	}
	printf("A quantidade de caracteres do nome digitado por você é %d.\n",tamanho);
	printf("O nome digitado por você tem %d vogais.\n",soma);
	porcentagem=soma*100/tamanho;
	printf("%.2f %% são de vogais no nome %s.",porcentagem,nome);
	getch();
	return 0;
}

