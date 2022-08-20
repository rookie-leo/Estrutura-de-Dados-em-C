/*23- Faça um programa que verifique qual a estação climática correspondente a um mês fornecido. O programa deve imprimir a estação: primavera, verão, outono ou inverno, considerando que são estações no  Hemisfério Sul, conforme dados abaixo: 
"	Primavera: setembro (9)/ outubro(10)/ novembro(11)
"	Verão: dezembro/ Janeiro/ Fevereiro
"	Outono: março/ abril/ maio
"	Inverno: junho/ julho/ agosto  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int mes;
	printf("Digite um número inteiro de 1 a 12 que corresponda ao mês do ano que você quer ");
	scanf("%d",&mes);
	switch (mes){
		case 9: case 10: case 11: printf("A estação é Primavera");
		break;
		case 12: case 1: case 2: printf("A estação é Verão");
		break;
		case 3: case 4: case 5: printf("A estação é Outono");
		break;
		case 6: case 7: case 8: printf("A estação é Inverno");
		break;
		default: printf("Você digitou um número inválido");
	}
	getch();
	return 0;
}

