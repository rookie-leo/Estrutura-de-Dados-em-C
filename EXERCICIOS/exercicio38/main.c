/*42) Crie um programa que leia três valores para um vetor de três posições e depois calcule a média dos valores acessando o vetor.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float media=0, v[3];
	int i;
	for (i=0;i<3;i++){
		printf("Digite um número ");
		scanf("%f",&v[i]);
		media=media+v[i];
	}
	media=media/3;
	printf("A média dos três valores digitados é %.2f.",media);
	getch();
	return 0;
}

