/*42) Crie um programa que leia tr�s valores para um vetor de tr�s posi��es e depois calcule a m�dia dos valores acessando o vetor.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float media=0, v[3];
	int i;
	for (i=0;i<3;i++){
		printf("Digite um n�mero ");
		scanf("%f",&v[i]);
		media=media+v[i];
	}
	media=media/3;
	printf("A m�dia dos tr�s valores digitados � %.2f.",media);
	getch();
	return 0;
}

