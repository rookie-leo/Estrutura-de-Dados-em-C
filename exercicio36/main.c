/*Fa�a um programa que leia uma sequ�ncia de 5 n�meros e exiba-os.*/
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float v[5];
	int i;
	for (i=0;i<5;i++){
		printf("Digite um n�mero ");
		scanf("%f",&v[i]);
	}
	printf("\n\nOs elementos do vetor s�o\n\n");
	for (i=0;i<5;i++){
		printf("%.1f\t",v[i]);
	}
	getch();
	return 0;
}

