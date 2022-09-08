/* 43) Crie um programa que leia uma quantidade de valores para um vetor de tamanho de posições definido pelo usuário  e depois calcule a média dos valores acessando o vetor. */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tamanho, i;
	printf("Digite o tamanho da sua amostra ");
	scanf("%d",&tamanho);
	float media=0, v[tamanho];
	for (i=0;i<tamanho;i++){
		printf("Digite um número ");
		scanf("%f",&v[i]);
		media=media+v[i];
	}
	media=media/tamanho;
	printf("A média dos valores digitados é %.2f.",media);
	getch();
	return 0;
}

