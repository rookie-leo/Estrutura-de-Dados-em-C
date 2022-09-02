/*37-Faça um programa que calcule e imprima a média dos 50 primeiros múltiplos de 2 e 3 maiores que 999 e menores  que 1300. (Utilize: for)  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float media;
	int cont, soma=0, qtd=0;
	for (cont=999;cont<=1300;cont++){
		// cont = 999
		// cont = 1000 ...
		// cont = 1002 ...
		// cont = 1008 ...
		if(cont%2==0 && cont%3==0){
			//999%2==0 && 999%3==0 => F && V = F sai
			//1000%2==0 && 1000%3==0 => V && F = F sai ... 
			//1002%2==0 && 1002%3==0 => V && V = V entra ... 
			//1008%2==0 && 1008%3==0 => V && V = V entra ... 
			printf("O número %d é múltiplo de 2 e 3.\n",cont);
			soma+=cont;
			//soma=soma+cont;
			//soma=0+1002 = 1002
			//soma=1002 + 1008 = 2010
			qtd++;
			//qtd=qtd+1
			//qtd=0+1
			//qtd=+1=2
		}
	}
	printf("A quantidade de números múltiplos de 2 e 3 que estão entre 999 e 1300 é %d.\n",qtd);
	media=soma/qtd;
	printf("A média dos %d números entre 999 e 1300 múltiplos de 2 e 3 é %.2f.",qtd,media);
	getch();
	return 0;
}

