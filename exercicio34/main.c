/* 38-Faça um programa que receba um número inteiro positivo qualquer, calcule e mostre na tela os números pares e a média dos números ímpares compreendidos entre 1 e o número digitado. (Utilize: for) */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float media=0;
	int cont, qtd, n;
	printf("Digite um número inteiro positivo maior que 1 ");
	scanf("%d",&n);
	for(cont=1;cont<=n;cont++){
		if(cont%2==0){
		printf("O número %d é par.\n",cont);
		}
		else{
			media=media+cont;
			qtd++;
		}
	}
	media=media/qtd;
	printf("A média dos %d números ímpares é %.2f.",qtd,media);
	getch();
	return 0;
}

