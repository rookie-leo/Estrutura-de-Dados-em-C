/* 44)Fa�a um programa que receba 15 valores reais que devem ser armazenados em um vetor. Ap�s a digita��o de  todos os valores, mostre na tela todos os valores pela sua metade respectiva e imprima os resultados atuais. */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float v[15];
	int i;
	for(i=0;i<15;i++){
		printf("Digite um n�mero ");
		scanf("%f",&v[i]);
	}
	printf("\n\nA metade de cada valor digitado �\n\n");
	for(i=0;i<15;i++){
		v[i]=v[i]/2;
		printf("%.2f\t",v[i]);
	}
	getch();
	return 0;
}

