/*37-Fa�a um programa que calcule e imprima a m�dia dos 50 primeiros m�ltiplos de 2 e 3 maiores que 999 e menores  que 1300. (Utilize: for)  */
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
			printf("O n�mero %d � m�ltiplo de 2 e 3.\n",cont);
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
	printf("A quantidade de n�meros m�ltiplos de 2 e 3 que est�o entre 999 e 1300 � %d.\n",qtd);
	media=soma/qtd;
	printf("A m�dia dos %d n�meros entre 999 e 1300 m�ltiplos de 2 e 3 � %.2f.",qtd,media);
	getch();
	return 0;
}

