/*33)Fa�a um programa que leia 15 dados do tipo inteiro, armazene-os em um vetor, calcule e mostre na tela os valores  que est�o no intervalo 0<vetor[i]<10 .  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, v[15];
	for(i=0;i<15;i++){
		printf("Digite um n�mero inteiro ");
		scanf("%d",&v[i]);
	}
	for (i=0;i<15;i++){
		if(v[i]>0 && v[i]<10){
			printf("O n�mero %d est� no intervalo entre 0 e 10.\n",v[i]);
		}
	}
	getch();
	return 0;
}

