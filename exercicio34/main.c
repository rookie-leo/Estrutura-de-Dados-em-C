/* 38-Fa�a um programa que receba um n�mero inteiro positivo qualquer, calcule e mostre na tela os n�meros pares e a m�dia dos n�meros �mpares compreendidos entre 1 e o n�mero digitado. (Utilize: for) */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float media=0;
	int cont, qtd, n;
	printf("Digite um n�mero inteiro positivo maior que 1 ");
	scanf("%d",&n);
	for(cont=1;cont<=n;cont++){
		if(cont%2==0){
		printf("O n�mero %d � par.\n",cont);
		}
		else{
			media=media+cont;
			qtd++;
		}
	}
	media=media/qtd;
	printf("A m�dia dos %d n�meros �mpares � %.2f.",qtd,media);
	getch();
	return 0;
}

