/*34) Faça um programa que receba 30 valores em um vetor de inteiros, mas somente valores múltiplos de 4 e 6.  O programa deve solicitar um novo valor, caso a condição não seja satisfeita. Ao final, mostrar os elementos do vetor na tela. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, v[10], x=0;
	for (i=0;i<10;i++){
		do{
			printf("Digite um número inteiro ");
			scanf("%d",&x);
			if(x%4==0 && x%6==0){
				printf("Número aceito.\n",i+1);
				v[i]=x;
			}
			else{
				printf("Número inválido.\n");
			}
		}
		while (x%4!=0 && x%6!=0);
	}
	printf("\n\nO vetor é \n\n");
	for(i=0;i<10;i++){
		printf("%d\t",v[i]);
	}
	getch();
	return 0;
}

