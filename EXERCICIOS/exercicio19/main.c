/*23- Fa�a um programa que verifique qual a esta��o clim�tica correspondente a um m�s fornecido. O programa deve imprimir a esta��o: primavera, ver�o, outono ou inverno, considerando que s�o esta��es no  Hemisf�rio Sul, conforme dados abaixo: 
"	Primavera: setembro (9)/ outubro(10)/ novembro(11)
"	Ver�o: dezembro/ Janeiro/ Fevereiro
"	Outono: mar�o/ abril/ maio
"	Inverno: junho/ julho/ agosto  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int mes;
	printf("Digite um n�mero inteiro de 1 a 12 que corresponda ao m�s do ano que voc� quer ");
	scanf("%d",&mes);
	switch (mes){
		case 9: case 10: case 11: printf("A esta��o � Primavera");
		break;
		case 12: case 1: case 2: printf("A esta��o � Ver�o");
		break;
		case 3: case 4: case 5: printf("A esta��o � Outono");
		break;
		case 6: case 7: case 8: printf("A esta��o � Inverno");
		break;
		default: printf("Voc� digitou um n�mero inv�lido");
	}
	getch();
	return 0;
}

