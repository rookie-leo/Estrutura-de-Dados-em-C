/*32-Faça um programa que verifique entre os 100 primeiros números quais são múltiplos de 4 e 6 ao mesmo tempo e calcule a média. (do...while)  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float media, soma=0;
	int n=1, qtd=0;
	do{
		if(n%4==0 && n%6==0){
			//1%4==0 && 1%6==0 => F sai ...
			//12%4==0 && 12%6==0 => V entra ...
			//24%4==0 && 24%6==0 => V entra ...
			printf("O número %d é múltiplo de 4 e 6.\n",n);
			soma=soma+n;
			//soma=0+12=12
			//soma=12+24=36
			qtd=qtd+1;
			//qtd=0+1=1
			//qtd=1+1=2
		}
		n++;
		//n=1+1 sobe ....
	}
	while(n<=100);
	media=soma/qtd;
	printf("A média dos %d múltiplos de 4 e 6 é %.2f.",qtd,media);
	getch();
	return 0;
}

