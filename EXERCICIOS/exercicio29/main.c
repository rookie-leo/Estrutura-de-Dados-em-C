/* 33-Faça um programa que receba 10 números inteiros positivos quaisquer, calcule e mostre na tela o dobro dos valores pertencentes ao intervalo: 5<x<20. (do...while) */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, dobro, cont=1;
	do{
		printf("Digite um número inteiro ");
		scanf("%d",&n);
		if(n>5 && n<20){
			dobro=2*n;
			printf("O dobro de %d é %d.\n",n,dobro);
		}
		cont++;
		//cont=cont+1
		//cont=1+1=2
		//cont=2+1=3
	}
	while (cont<=10);
	//2<=10 V sobe 
	//3<=10 V sobe
	getch();
	return 0;
}

